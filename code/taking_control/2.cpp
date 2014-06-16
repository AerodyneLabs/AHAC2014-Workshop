#include "mbed.h"

DigitalOut out(LED1);
DigitalIn in(USER_BUTTON);

int main() {
	while(true) {
		if(in == 0) {	// Button is pushed
			out = 1;
		} else {			// Button is not pushed
			out = 0;
		}
	}
}