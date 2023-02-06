#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(12, 10);  // Initialize sensor that uses digital pins 13 and 12.
UltraSonicDistanceSensor distanceSensor2(12, 9);  // Initialize sensor that uses digital pins 13 and 12.

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
}

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    Serial.println("Sensor 1");
    Serial.println(distanceSensor.measureDistanceCm());
    Serial.println("Sensor 2");
    Serial.println(distanceSensor2.measureDistanceCm());
    delay(1000);
}
