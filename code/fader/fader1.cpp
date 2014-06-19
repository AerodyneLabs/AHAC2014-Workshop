#include "mbed.h"

AnalogIn in(A0);
PwmOut out(LED1);

int main() {
	out.period(0.01);
	
	while(true) {
		out = in;
	}
}