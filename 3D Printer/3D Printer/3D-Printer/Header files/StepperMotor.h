/*
 * StepperMotor.h
 *
 * Created: 09.11.2017 10:04:36
 *  Author: Adam
 */ 


#ifndef STEPPERMOTOR_H_
#define STEPPERMOTOR_H_
#include "Arduino.h"

#define pinStepX         54
#define pinDirX          55
#define pinEnX           38
#define pinCSX           53

#define pinStepY         60
#define pinDirY          61
#define pinEnY           56
#define pinCSY           49

#define pinStepZ         46
#define pinDirZ          48
#define pinEnZ           62
#define pinCSZ           40

void StepperInit();
void ChangeStepperXDir(bool dirX);
void ChangeStepperYDir(bool dirY);
void ChangeStepperZDir(bool dirZ);
void MovementXYZ(int *SteppsX, int *SteppsY, int *SteppsZ,
bool switchX, bool switchY, bool switchZ);


#endif /* STEPPERMOTOR_H_ */