#ifndef MOTOR_H
#define MOTOR_H
#include "main.h"



//DEFS//
extern pros::Motor shiftLeft;
extern pros::Motor shiftRight;
extern pros::Motor brakePedal;
extern pros::Motor clutchPedal;
extern pros::Motor accelPedal;
extern pros::Motor wheel;
extern pros::Controller master;


extern void zeroAll();
#endif