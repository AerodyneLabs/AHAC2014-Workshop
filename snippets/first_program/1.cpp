#include "mbed.h"

DigitalOut led(LED1);

int main() {		// Program entry
	while(1) {		// Main loop
		led = 1;		// Turn on LED
		wait(0.2);	// Wait 0.2 seconds
		led = 0;		// Turn off LED
		wait(0.8);	// Wait 0.8 seconds
	}							// Repeat
}