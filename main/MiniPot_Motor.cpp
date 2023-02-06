#include "MiniPot_Motor.h"

/*TO DO change digital to analog to transmit PWM, not full power*/

void MOTOR_init(){
  pinMode(PIN_MOTOR0_0, OUTPUT);
  pinMode(PIN_MOTOR0_1, OUTPUT);
  pinMode(PIN_MOTOR1_0, OUTPUT);
  pinMode(PIN_MOTOR1_1, OUTPUT);

/*All motor off*/
  analogWrite(PIN_MOTOR0_0, 0);
  analogWrite(PIN_MOTOR0_1, 0);
  analogWrite(PIN_MOTOR1_0, 0);
  analogWrite(PIN_MOTOR1_1, 0);
}

void MOTOR_forward(int speedMotor){
  analogWrite(PIN_MOTOR0_0, speedMotor);
  analogWrite(PIN_MOTOR0_1, 0);

  analogWrite(PIN_MOTOR1_0, 0);
  analogWrite(PIN_MOTOR1_1, speedMotor);
}

void MOTOR_backward(int speedMotor){
  analogWrite(PIN_MOTOR0_0, 0);
  analogWrite(PIN_MOTOR0_1, speedMotor);
  
  analogWrite(PIN_MOTOR1_0, speedMotor);
  analogWrite(PIN_MOTOR1_1, 0);
}

void MOTOR_rotateRight(int speedMotor){
  analogWrite(PIN_MOTOR0_0, 0);
  analogWrite(PIN_MOTOR0_1, speedMotor);
  
  analogWrite(PIN_MOTOR1_0, 0);
  analogWrite(PIN_MOTOR1_1, speedMotor);
}

void MOTOR_rotateLeft(int speedMotor){
  analogWrite(PIN_MOTOR0_0, speedMotor);
  analogWrite(PIN_MOTOR0_1, 0);
  
  analogWrite(PIN_MOTOR1_0, speedMotor);
  analogWrite(PIN_MOTOR1_1, 0);
}