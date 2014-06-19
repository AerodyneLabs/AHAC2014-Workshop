#include "mbed.h"

PwmOut out(LED1);
float step = 0.01;

int main() {
	while(true) {
		out += step;
		if(out >= 1.0)
			step = -0.01;
		if(out <= 0.0)
			step = 0.01;
		wait(0.01);
	}
}