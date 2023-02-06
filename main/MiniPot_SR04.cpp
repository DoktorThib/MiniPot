#include "MiniPot_SR04.h"
#include <HCSR04.h>

/*declare 2 ultrasonic sensor*/
UltraSonicDistanceSensor distanceSensor0(PIN_TRIGGER, PIN_ECHO0);
UltraSonicDistanceSensor distanceSensor1(PIN_TRIGGER, PIN_ECHO1);

void SR04_dist_cm(int* dist0, int* dist1){
    *dist0 = distanceSensor0.measureDistanceCm();
    *dist1 = distanceSensor1.measureDistanceCm();
}



