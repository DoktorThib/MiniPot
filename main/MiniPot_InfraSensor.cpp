#include "MiniPot_InfraSensor.h"


void INFRASENSOR_readData(int* sensorValue){
    *sensorValue = analogRead(PIN_INFRASENSOR);
}