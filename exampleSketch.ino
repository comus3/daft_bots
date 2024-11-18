#include "Example.h"

// Create an instance of the Example class
// Sensor connected to analog pin A0, actuator connected to digital pin 9
Example example(A0, 9);

void setup() {
    // Initialize the Example class
    example.begin();
    Serial.begin(9600);  // Start serial communication for debugging
}

void loop() {
    // Update sensor value and control actuator
    example.update();

    // Print the sensor value to the Serial Monitor
    int sensorValue = example.getSensorValue();
    Serial.println(sensorValue);

    delay(500);  // Delay for a short time
}
