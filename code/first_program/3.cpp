/* Includes */
#include "mbed.h"

/* Global Variable
	 Declarations    */
DigitalOut led(LED1);

/* Main Function */
int main() {
	while(true) {
		led = 1;		// Turn LED on
		wait(0.2);	// Wait a bit
		led = 0;		// Turn LED off
		wait(0.8);	// Wait longer
	}
}