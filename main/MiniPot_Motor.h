#ifndef MOTOR_H_
#define MOTOR_H_

#include <Arduino.h>
#include "param.h"

void MOTOR_init(void);
void MOTOR_backward(void);
void MOTOR_forward(void);

void MOTOR_rotateRight(void);
void MOTOR_rotateLeft(void);


#endif