#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()

{

	motor[port2] = 127;
	motor[port3] = 127;
	wait1Msec(2700);

	motor[port2] = 127;
	motor[port3] = 0;
	wait1Msec(1500);

		motor[port2] = 127;
	motor[port3] = 127;
	wait1Msec(2700);

}
