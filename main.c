/* @file main.c
*
* Description:
* main.c file contains global header files and global variables.
*/


// SYSTEM INCLUDES
#include <stdio.h>


// USER HEADER FILES
#include "main.h"
#include "sensor.h"
#include "control.h"

// VARIABLES
extern char helloWorld[];

int main(void) {
	printf(helloWorld);
	printf("\nValue = %d", testFromControldotH); // %u used for calling uintX_t variables
	return 0;
}
// PROTOTYPES
