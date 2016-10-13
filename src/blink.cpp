#include "Arduino.h"
#include "example.cpp"

//Include namespaces
using namespace Example;

#define LED_PIN 13

void calculateSomething();
void exampleReadFromSerial();

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    calculateSomething();

    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
}

/**
 * Example function which uses an example class
 */
void calculateSomething() {
    SumCalculator sumCalculator;
    int sumResult = sumCalculator.sum(1, 2);

    if (sumResult == 3) {
        digitalWrite(LED_PIN, LOW);
    }
}

void exampleReadFromSerial()
{
    String input;
    Serial.begin(9600);

    if (Serial.available() > 0) {
        input = Serial.readString();
    }

    Serial.print("Hello World!");
    Serial.flush();
}