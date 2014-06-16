#include "mbed.h"

DigitalOut out(LED1);
DigitalIn in(USER_BUTTON);
int divisor = 1;

int main() {
	while(true) {
		if(in == 0) {	// Button is pushed
			divisor *= 2;
			if(divisor >= 16) divisor = 1;
		}
		out = 1;	wait_ms(500 / divisor);
		out = 0;	wait_ms(500 / divisor);
	}
}