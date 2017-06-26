/**
 * Helper methods that write to the buzzer and the corresponding LED
 * based on the value given to the programme from the remote
 * control
 * 
 * @author Mohit Kewalramani
 * @version 1.0
 * @published 2017-06-25
 */


/*
 * The following are the hexadecimal values of the infrared values from  
 * keys labeled 0 -> 9 that the remote control emits. These values are
 * used to check what the magnitude of the output buzzer should be.
 * A high value of 9 for example, would result in the proportionate
 * output being sent to the buzzer and LED
 */
#define key_zero 0xFF6897
#define key_one 0xFF30CF
#define key_two 0xFF18E7
#define key_three 0xFF7A85
#define key_four 0xFF10EF
#define key_five 0xFF38C7
#define key_six 0xFF5AA5
#define key_seven 0xFF42BD
#define key_eight 0xFF4AB5
#define key_nine 0xFF52AD


/**
 * This method reads the value of the integer passed 
 * through from the remote control. The values the sketch
 * recognizes are the integers from 0 through 9. 
 * A high value given would result in a high output value
 * supplied to the buzzer and led. A low value would 
 * output a low value to the buzzer and led
 */
void buzzerAndLEDWrite(){
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();
  }

  if (results.value == key_zero){
    analogWrite(buzzerPin, 0);
    writeZero();
  }
  else if (results.value == key_one){
    analogWrite(buzzerPin, 25);
    writeOne();
  }
  else if (results.value == key_two){
    analogWrite(buzzerPin, 50);
    writeTwo();
  }
  else if (results.value == key_three){
    analogWrite(buzzerPin, 75);
    writeThree();
  }
  else if (results.value == key_four){
    analogWrite(buzzerPin, 100);
    writeFour();
  }
  else if (results.value == key_five){
    analogWrite(buzzerPin, 125);
    writeFive();
  }
  else if (results.value == key_six){
    analogWrite(buzzerPin, 150);
    writeSix();
  }
  else if (results.value == key_seven){
    analogWrite(buzzerPin, 175);
    writeSeven();
  }
  else if (results.value == key_eight){
    analogWrite(buzzerPin, 200);
    writeEight();
  }
  else if (results.value == key_nine){
    analogWrite(buzzerPin, 255);
    writeNine();
  }
}

