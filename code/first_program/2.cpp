/* Includes */
#include "mbed.h"

/* Global Variable
	 Declarations    */
DigitalOut led(LED1);

/* Main Function */
int main() {
	while(true) {
		led = 1;	// Turn LED on
		led = 0;	// Turn LED off
	}
}