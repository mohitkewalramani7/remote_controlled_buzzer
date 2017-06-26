/**
 * Helper methods that write the value supplied from the remote
 * controller to the 1-bit LED display so the user knows
 * what level of output is being used to supply the buzzer and LED.
 * 
 * @author Mohit Kewalramani
 * @version 1.0
 * @published 2017-06-25
 */


/*
 * Since we are using a cathode setup as the 1-bit LED display,
 * a low output would indicate "OFF" and a high output would 
 * indicate "ON". Hence we declare the variables at the top to
 * match the opposites, in order to allow us to make our writing 
 * code more intuitive and readable.
 */
#define ON LOW
#define OFF HIGH


/**
 * The following methods write their respective integer value to
 * the 1-bit display by supplying a high power to the respective 
 * lines that make up the LED output of the integer 
 */

void writeBlank(){
  digitalWrite(a, OFF);
  digitalWrite(b, OFF);
  digitalWrite(c, OFF);
  digitalWrite(d, OFF);
  digitalWrite(e, OFF);
  digitalWrite(f, OFF);
  digitalWrite(g, OFF);
  digitalWrite(h, OFF);
}

void writeZero(){
  digitalWrite(a, OFF);
  digitalWrite(b, ON);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, ON);
  digitalWrite(f, ON);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeOne(){
  digitalWrite(a, OFF);
  digitalWrite(b, OFF);
  digitalWrite(c, OFF);
  digitalWrite(d, ON);
  digitalWrite(e, OFF);
  digitalWrite(f, OFF);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeTwo(){
  digitalWrite(a, ON);
  digitalWrite(b, OFF);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, ON);
  digitalWrite(f, ON);
  digitalWrite(g, OFF);
  digitalWrite(h, OFF);
}

void writeThree(){
  digitalWrite(a, ON);
  digitalWrite(b, OFF);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, OFF);
  digitalWrite(f, ON);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeFour(){
  digitalWrite(a, ON);
  digitalWrite(b, ON);
  digitalWrite(c, OFF);
  digitalWrite(d, ON);
  digitalWrite(e, OFF);
  digitalWrite(f, OFF);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeFive(){
  digitalWrite(a, ON);
  digitalWrite(b, ON);
  digitalWrite(c, ON);
  digitalWrite(d, OFF);
  digitalWrite(e, OFF);
  digitalWrite(f, ON);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeSix(){
  digitalWrite(a, ON);
  digitalWrite(b, ON);
  digitalWrite(c, ON);
  digitalWrite(d, OFF);
  digitalWrite(e, ON);
  digitalWrite(f, ON);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeSeven(){
  digitalWrite(a, OFF);
  digitalWrite(b, OFF);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, OFF);
  digitalWrite(f, OFF);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeEight(){
  digitalWrite(a, ON);
  digitalWrite(b, ON);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, ON);
  digitalWrite(f, ON);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

void writeNine(){
  digitalWrite(a, ON);
  digitalWrite(b, ON);
  digitalWrite(c, ON);
  digitalWrite(d, ON);
  digitalWrite(e, OFF);
  digitalWrite(f, OFF);
  digitalWrite(g, ON);
  digitalWrite(h, OFF);
}

