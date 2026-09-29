#include <Arduino.h>
#define LED_PIN 8

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, LOW); // LED вкл (active LOW)
    delay(500);
    digitalWrite(LED_PIN, HIGH); // LED выкл
    delay(500);
}
