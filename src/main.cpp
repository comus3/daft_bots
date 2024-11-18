#include <Arduino.h>
#include <Example.h>  // Include your custom library

Example example(A0, 9);  // Create an instance of the Example class

void setup() {
    Serial.begin(9600);
    example.begin();  // Initialize the Example library
}

void loop() {
    example.update();  // Update sensor and actuator
    Serial.println(example.getSensorValue());  // Print sensor value
    delay(500);
}
