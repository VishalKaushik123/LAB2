/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vishal/Documents/CTDProjects/LAB2/src/LAB2.ino"
/*
 * Project LAB2
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  // creates an interger variable called value that will store input from A5
  uint16_t value;
  Serial.begin(9600);
  //stores number 0-4095 into the variable value
  value = analogRead(A5);
  //prints put the variable value in the serial monitor
  Serial.println(value);
  //turns the light on
  digitalWrite(D5, HIGH);
  //waits 1 second
  delay(value);
  //turns the light off
  digitalWrite(D5, LOW);
  // waits 1 second
  delay(value);   
}

