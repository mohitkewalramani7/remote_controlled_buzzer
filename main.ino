/**
 * The arduino sketch that declares the setup() and loop()
 * methods that will be programmed into the microcontroller
 * 
 * @author Mohit Kewalramani
 * @version 1.0
 * @published 2017-06-25
 */

#include <IRremote.h>

int buzzerPin = 10;           // The pin that controls the sound of the buzzer and associated LED
/*
 * The pin that takes in the analog value given by the Infrared Sensor connected
 * that takes in signals given by the remote control
 */
int remoteAnalogPin = A0;

/*
 * The following eight variables connect each pin on 
 * the single cathode 1-bit LED display. There are 8
 * pins on the display, each of which controls a single
 * line on the 7 lines that make up the 8 digit display, 
 * including the decimal point. A printed digit is generated
 * by setting a combination of the following lines to 
 * either HIGH/LOW state through each assigned arduino pin
 */
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int h = 9;

IRrecv irrecv(remoteAnalogPin);     // Receives infrared data from analog pin
decode_results results;             // Decodes the data received from the remote

/**
 * This method runs once when setting up the microcontroller
 * for this project
 */
void setup(){
  pinMode(buzzerPin, OUTPUT);         // Declares the buzzerPin and associated LED to be OUTPUT
  pinMode(remoteAnalogPin, INPUT);    // Declares the analogPin to be an INPUT pin (reads remote signals)
  irrecv.enableIRIn();                // Enables the script to receive infrared data

  /*
   * Declares the following 8 pins on the 1-bit display to all
   * be output pins
   */
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);

  writeZero();                        // Starts the programme of with a value of zero on the display
}

/**
 * This method runs repeatedly while the microcontroller has power. It runs
 * after the setup() method has run
 */
void loop(){
  
  /*
   * Checks to see if value input by the remote has changed 
   * and accordingly updates the buzzer and led output. The input value
   * is also updated on the 1-bit LED display so the user knows
   * what level of output is being supplied to the buzzer and LED.
   */
  buzzerAndLEDWrite();                                          
  delay(200);                         // Delays the repeated checking by 200 ms
  
}
