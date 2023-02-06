//Libraries

#include "MiniPot_Led.h"
#include "MiniPot_Motor.h"
#include "MiniPot_SR04.h"
#include "MiniPot_InfraSensor.h"
#include "MiniPot_Buzzer.h"

#include "param.h"


void setup() {
  BUZZER_init ();
  LED_init ();
  MOTOR_init();

}

void loop() {
  MOTOR_rotateLeft(100);
  delay(200);
}
