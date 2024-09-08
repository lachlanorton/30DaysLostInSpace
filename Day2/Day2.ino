//#include Arduino.h

// Define Cabin Light Pin as pin 12 on Arduino board
#define CABIN_LIGHT_PIN 12

void setup() {
  // Set Cabin Light Pin as an Output pin
  pinMode(CABIN_LIGHT_PIN, OUTPUT);
}

void loop() {
  // Turn on LED
  digitalWrite(CABIN_LIGHT_PIN, HIGH);
  delay(1000);
  // Turn off LED
  digitalWrite(CABIN_LIGHT_PIN, LOW);
  delay(500);
}
