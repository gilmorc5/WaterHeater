/* @file control.c
*
*/
/**************************************/

// INCLUDES
#include "control.h"
#include "sensor.h"

#include <stdbool.h>

extern bool intakeValve1 = 0; 
extern bool intakeValve2;
extern bool outletValve;
extern bool pressureSensor;

extern int waterLevelSensor;
extern int waterLevel;
extern int tankPressure;
extern int waterTemp;

// PROTOTYPES
void flagIntake(intakeValve1) {
	if (intakeValve1 == 0)intakeValve1 = 1;
	if (intakeValve1 == 1)intakeValve1 = 0;
}

void testFunction(intakeValve1) {
	flagIntake(intakeValve1);
	printf("Intake 1: %d\n", intakeValve1);
}

void printValues(
	bool intakeValve2,
	bool outletValve,
	bool pressureSensor,
	int waterLevelSensor,
	int waterLevel,
	int tankPressure,
	int waterTemp
) {
	intakeValve1 = 1;
	outletValve = 1;
	pressureSensor = 1;
	waterLevelSensor = 3;
	waterLevel = 42;
	tankPressure = 21;
	waterTemp = 85;
	printf("Intake 2: %d\nWater Level Sensor: %d\nWater Level: %d\nTank Pressure: %d\nWater Temp: %d",
		intakeValve2, waterLevelSensor, waterLevel, tankPressure, waterTemp);
}
