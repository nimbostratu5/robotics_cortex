#pragma config(StandardModel, "SWERVEBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//Hello World! LCD DISPLAY
	//step 1: clear display
	//step 2: display data
	//step 3: keep the prgm running

	clearLCDLine(0);
	clearLCDLine(1);
	float value=0;
	float temp=0;
	SensorValue[rightEncoder] = 0;
	value = SensorValue[rightEncoder];

	//displayLCDCenteredString(1, "Hello World!");
	//wait1Msec(10000);

	while(1==1)
	{

			clearLCDLine(0);
			clearLCDLine(1);
			displayLCDString(0, 0, "encoder:");
      displayNextLCDNumber( SensorValue[rightEncoder], 4);
      displayLCDString(1, 0, "rotation:");
      displayNextLCDNumber( value, 4);
			wait1Msec(50);
			temp = SensorValue[rightEncoder];

	}


}
