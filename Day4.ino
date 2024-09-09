//#include "Arduino.h"

//#define CABIN_LIGHT_PIN 12
//#define CABIN_LIGHT_SWITCH_PIN 2
const byte RED_LIGHT_PIN = 10;
const byte GREEN_LIGHT_PIN = 11;
const byte BLUE_LIGHT_PIN = 12;

const byte RED_LIGHT_SWITCH_PIN = 2;
const byte GREEN_LIGHT_SWITCH_PIN = 3;
const byte BLUE_LIGHT_SWITCH_PIN = 4;


void setup() {
  // Set Cabin Light Pin as an Output pin
  pinMode(RED_LIGHT_PIN, OUTPUT);
  pinMode(GREEN_LIGHT_PIN, OUTPUT);
  pinMode(BLUE_LIGHT_PIN, OUTPUT);

  pinMode(RED_LIGHT_SWITCH_PIN, INPUT);
  pinMode(GREEN_LIGHT_SWITCH_PIN, INPUT);
  pinMode(BLUE_LIGHT_SWITCH_PIN, INPUT);
}

void loop() {
  if(digitalRead(RED_LIGHT_SWITCH_PIN) == HIGH)
  {
    digitalWrite(RED_LIGHT_PIN, HIGH);
  }
  else
  {
    digitalWrite(RED_LIGHT_PIN, LOW);
  }

  if(digitalRead(GREEN_LIGHT_SWITCH_PIN) == HIGH)
  {
    digitalWrite(GREEN_LIGHT_PIN, HIGH);
  }
  else
  {
    digitalWrite(GREEN_LIGHT_PIN, LOW);
  }

  if(digitalRead(BLUE_LIGHT_SWITCH_PIN) == HIGH)
  {
    digitalWrite(BLUE_LIGHT_PIN, HIGH);
  }
  else
  {
    digitalWrite(BLUE_LIGHT_PIN, LOW);
  }
}
