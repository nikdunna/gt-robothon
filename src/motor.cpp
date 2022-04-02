#include "main.h"


//Vars
int currentGear = 0;



pros::Controller master(pros::E_CONTROLLER_MASTER);

//Motor Defs
pros::Motor shiftLeft(3, pros::E_MOTOR_GEARSET_06,false);
pros::Motor shiftRight(4, pros::E_MOTOR_GEARSET_06, true);
pros::Motor brakePedal(8,pros::E_MOTOR_GEARSET_06, false);
pros::Motor clutchPedal(9,pros::E_MOTOR_GEARSET_06, true);
pros::Motor accelPedal(5,pros::E_MOTOR_GEARSET_06, false);
pros::Motor wheel(2, pros::E_MOTOR_GEARSET_18, true);


//Func Defs
void zeroAll()
{
    shiftLeft.tare_position();
    shiftRight.tare_position();
    brakePedal.tare_position();
    clutchPedal.tare_position();
    accelPedal.tare_position();
    wheel.tare_position();
}

void accel()
{
    accelPedal.move(200);
    pros::delay(1000);
    accelPedal.move(0);
    accelPedal.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void deaccel()
{
    accelPedal.move(-200);
    pros::delay(1000);
    accelPedal.move(0);
    accelPedal.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
}

void turnLeft()
{
    do
    {
        wheel.move(-30);
    }
    while (wheel.get_position() > -500);
    wheel.move(0);
}

void turnRight()
{
    do
    {
        wheel.move(30);
    }
    while (wheel.get_position() < 500);
    wheel.move(0);
}

void shiftGear(int gear)
{
    switch(gear)
    {
       
        case 1:
            
            break;
        case 2:
            //shit -134, 124
            break;
        case 3:
            //shit
            break;
        case 4:
            //shit
            break;
        case 5:
            //shit
            break;
        case 6:
            //shit
            break;

    }
    
}
