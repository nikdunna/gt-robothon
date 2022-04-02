#include "main.h"



/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() 
{
	 pros::lcd::initialize();
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}



void competition_initialize() {}





void autonomous() {}




void opcontrol() {
	int wheelSpeed = 0;
	int leftShiftSpeed = 0;
	int rightShiftSpeed = 0;
	int leftMSense;
	int rightMSense;
	zeroAll();
	while (true) {

		leftMSense = shiftLeft.get_position();
		rightMSense = shiftRight.get_position();
	
		printf("%d , %d\n", leftMSense, rightMSense);
		//printf("%d", rightMSense);

		wheelSpeed = master.get_analog(ANALOG_LEFT_X); // wheel shi
		if(wheel.get_position() > 2300 || wheel.get_position() < -2300)
		{
			wheel.move(wheelSpeed/3);
		}
		else
		{
			
			wheel.move(wheelSpeed);
		}

		



		leftShiftSpeed = master.get_analog(ANALOG_LEFT_Y); // shifter shi
		shiftLeft.move(leftShiftSpeed);
		rightShiftSpeed = master.get_analog(ANALOG_RIGHT_Y); //other shifter shi
		shiftRight.move(rightShiftSpeed);






		if(master.get_digital(DIGITAL_R1))
		{
		  accelPedal.move(200);
		}
		else if(master.get_digital(DIGITAL_R2))
		{
			accelPedal.move(-200);
		}
		else
		{
			accelPedal.move(0);
		}


		if(master.get_digital(DIGITAL_L1))
		{
		  brakePedal.move(200);
		}
		else if(master.get_digital(DIGITAL_L2))
		{
			brakePedal.move(-200);
		}
		else
		{
			brakePedal.move(0);
		}


		if(master.get_digital(DIGITAL_A))
		{
		  clutchPedal.move(200);
		}
		else if(master.get_digital(DIGITAL_B))
		{
			clutchPedal.move(-200);
		}
		else
		{
			clutchPedal.move(0);
		}


	}
}
