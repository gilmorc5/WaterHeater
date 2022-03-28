/* @file sensor.h
*
* Description:
* Contains variables for sensors in system.
*/


#include <cstdint>
#include <stdint.h>
#ifndef SENSOR_H
#define SENSOR_H

// VARIABLES -- 8 bit
extern uint8_t waterLevelSensor = 0; // Unsigned 8-bit, initialized at 0 (empty) 0 -> 4

// VARIABLES -- 16 bit
extern uint16_t waterLevel = 0; // in Liters, Unsigned 16-bit, initialized at 0 (empty)
extern uint16_t tankPressure = 14.6959; /* 1 atm = 14.6959 psi Unsigned 16-bit, initialized at 1 atm*/
extern uint16_t waterTemp = 22.222; // Unsigned 16-bit, initialized at 22°C 

// VARIABLES -- 1 bit (Boolean)
extern bool intakeValve1 = 0; // Boolean - On/Off, triggered(1) if is waterLevelSensor = 0,1,2 
extern bool intakeValve2 = 0; // Boolean - On/Off, triggerd(1) if is waterLevelSensor = 0,1,2,3
extern bool outletValve = 0; // Boolean - On/Off, triggered(1) if waterLevelSensor = 4 || pressureSensor = Critical (50 psi)
extern bool pressureSensor = 0; // Boolean - On/Off, Exception Object (Signal) 





#endif /* SENSOR_H */

/***** EOF ******/