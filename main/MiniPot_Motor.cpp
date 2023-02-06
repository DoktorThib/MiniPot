#include "MiniPot_Motor.h"

/*TO DO change digital to analog to transmit PWM, not full power*/

void MOTOR_init(){
  pinMode(PIN_MOTOR0_0, OUTPUT);
  pinMode(PIN_MOTOR0_1, OUTPUT);
  pinMode(PIN_MOTOR1_0, OUTPUT);
  pinMode(PIN_MOTOR1_1, OUTPUT);

/*All motor off*/
  digitalWrite(PIN_MOTOR0_0, LOW);
  digitalWrite(PIN_MOTOR0_1, LOW);
  digitalWrite(PIN_MOTOR1_0, LOW);
  digitalWrite(PIN_MOTOR1_1, LOW);
}

void MOTOR_forward(){
  digitalWrite(PIN_MOTOR0_0, HIGH);
  digitalWrite(PIN_MOTOR0_1, LOW);

  digitalWrite(PIN_MOTOR1_0, HIGH);
  digitalWrite(PIN_MOTOR1_1, LOW);
}

void MOTOR_backward(){
  digitalWrite(PIN_MOTOR0_0, LOW);
  digitalWrite(PIN_MOTOR0_1, HIGH);
  
  digitalWrite(PIN_MOTOR1_0, LOW);
  digitalWrite(PIN_MOTOR1_1, HIGH);
}

void MOTOR_rotateLeft(){
  digitalWrite(PIN_MOTOR0_0, HIGH);
  digitalWrite(PIN_MOTOR0_1, LOW);
  
  digitalWrite(PIN_MOTOR1_0, LOW);
  digitalWrite(PIN_MOTOR1_1, HIGH);
}

void MOTOR_rotateRight(){
  digitalWrite(PIN_MOTOR0_0, LOW);
  digitalWrite(PIN_MOTOR0_1, HIGH);
  
  digitalWrite(PIN_MOTOR1_0, HIGH);
  digitalWrite(PIN_MOTOR1_1, LOW);
}