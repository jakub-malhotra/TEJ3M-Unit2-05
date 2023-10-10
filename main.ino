//  Created by: Jakub Malhotra
//  Created on: October 2023
//  Turns an LED on for one second, then off for one second, repeatedly.

#include <Servo.h>

Servo servoNumber1;

void setup() {
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  servoNumber1.write(180);
  delay(1000);
  servoNumber1.write(0);
  delay(1000);
}