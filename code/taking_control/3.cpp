#include "mbed.h"

DigitalOut out(LED1);
DigitalIn in(USER_BUTTON);
int count = 0;

int main() {
	while(true) {
		if(in == 0) count++;
		if(count == 0) {
			out = 1;
			wait_ms(500);
			out = 0;
			wait_ms(500);
		} else if(count == 1) {
			out = 1;
			wait_ms(250);
			out = 0;
			wait_ms(250);
		} else {
			count = 0;
		}
	}
}