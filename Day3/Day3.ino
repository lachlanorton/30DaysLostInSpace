//#include "Arduino.h"

// Define Cabin Light Pin as pin 12 on board
#define CABIN_LIGHT_PIN 12
// Define switch Pin as Pin 2 on board
#define CABIN_LIGHT_SWITCH_PIN 2

void setup() {
  // Set Cabin Light Pin as an Output pin
  pinMode(CABIN_LIGHT_PIN, OUTPUT);
  pinMode(CABIN_LIGHT_SWITCH_PIN, INPUT);
}

void loop() {
  if(digitalRead(CABIN_LIGHT_SWITCH_PIN) == HIGH)
  {
    digitalWrite(CABIN_LIGHT_PIN, HIGH);
  }
  else
  {
    digitalWrite(CABIN_LIGHT_PIN, LOW);
  }
}
