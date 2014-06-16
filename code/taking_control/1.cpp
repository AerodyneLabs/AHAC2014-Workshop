#include "mbed.h"

DigitalOut out(LED1);
DigitalIn in(USER_BUTTON);

int main() {
	while(true) {
		out = in;
	}
}