#include <Arduino.h>

int detectPin = 13;
bool detect = false;
int led = 14;

void setup() {
 Serial.begin(115200);
 Serial.println("Starting...\n");
 pinMode (detectPin, INPUT);
 pinMode (led, OUTPUT);
 digitalWrite(led, LOW);
}

void loop() {

 detect = digitalRead(detectPin);
 if(detect == true) {
 digitalWrite(led, HIGH);
 Serial.println("Movement detected");
 }
 else {
 digitalWrite(led, LOW);
 Serial.println("No movement detected");
 }
 delay(1000);
}