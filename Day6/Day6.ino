#include "Arduino.h"
const byte PHOTORESISTOR_PIN = A0;      // pin defined in "Arduino.h"
const unsigned int MIN_DELAY = 50;      // unsigned int represents numbers from 0 to 65535
const unsigned int MAX_DELAY = 500;     // We need unsigned int as the delay is larger than a full byte (255)

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PHOTORESISTOR_PIN, INPUT);

  Serial.begin(9600);                   // initialise serial, ensure baud rate in serial monitor matches this bit rate (9600)
}

void loop() {
  unsigned int light_value = analogRead(PHOTORESISTOR_PIN);   // light value from 0 to 1024

  Serial.print("Light value: ");
  Serial.print(light_value);

  static unsigned int darkest_light = light_value;
  static unsigned int brightest_light = light_value;

  if (light_value < darkest_light) 
  {
    darkest_light = light_value;      // update darkest light value              
  }

  if (light_value > brightest_light)
  {
    brightest_light = light_value;    // update brightest light value
  }

  // maps the Arduino's external light environment (darkest light and brightest light values) to fit within the MAX_DELAY and MIN_DELAY value scale
  unsigned int delay_value = map(light_value, darkest_light, brightest_light, MAX_DELAY, MIN_DELAY);
  Serial.print(", Delay value: ");
  Serial.println(delay_value);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_value);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_value);

}
