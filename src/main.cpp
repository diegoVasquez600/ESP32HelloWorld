#include <Arduino.h>

// put function declarations here:
void helloWorld(int, String);
int pin = 2;
void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(921600);
  Serial.println("\nInitial Setup Complete\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  String message = "Hello World";
  helloWorld(pin, message);
}

// put function definitions here:
void helloWorld(int pin, String message) {
  delay(1000);
  digitalWrite(pin, HIGH);
  Serial.println(message);
  delay(1000);
  digitalWrite(pin, LOW);
}