/* @file sensor.h
*
* Description:
* Contains variables for sensors in system.
*/


#include <stdbool.h>
#ifndef SENSOR_H
#define SENSOR_H

// VARIABLES -- 8 bit
int waterLevelSensor; // Unsigned 8-bit, initialized at 0 (empty) 0 -> 4

// VARIABLES -- 16 bit
int waterLevel; // in Liters, Unsigned 16-bit, initialized at 0 (empty)
int tankPressure; /* 1 atm = 14.6959 psi Unsigned 16-bit, initialized at 1 atm*/
int waterTemp; // Unsigned 16-bit, initialized at 22.222°C 

// VARIABLES -- 1 bit (Boolean)
bool intakeValve1; // Boolean - On/Off, triggered(1) if is waterLevelSensor = 0,1,2 
bool intakeValve2; // Boolean - On/Off, triggerd(1) if is waterLevelSensor = 0,1,2,3
bool outletValve; // Boolean - On/Off, triggered(1) if waterLevelSensor = 4 || pressureSensor = Critical (50 psi)
bool pressureSensor; // Boolean - On/Off, Exception Object (Signal) 

#endif /* SENSOR_H */

/***** EOF ******/