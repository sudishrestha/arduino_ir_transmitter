/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

IRsend irsend;

void setup()
{
  pinMode(13, OUTPUT);
   digitalWrite(13, HIGH); 
  Serial.begin(9600);
  delay(3000); // 3 sec delay to let you set up direction of IR properly - reduce or increase as desired
  
   digitalWrite(13, LOW);
  irsend.sendNEC(0xFF48B7, 32);
  delay(500);
   digitalWrite(13, HIGH);
}

void loop() {
}
