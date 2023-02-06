#ifndef MOTOR_H_
#define MOTOR_H_

#include <Arduino.h>
#include "param.h"

void MOTOR_init(void);

void MOTOR_backward(int speedMotor);
void MOTOR_forward(int speedMotor);

void MOTOR_rotateRight(int speedMotor);
void MOTOR_rotateLeft(int speedMotor);


#endif