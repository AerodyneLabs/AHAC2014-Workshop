#include "mbed.h"

DigitalIn in(A0);
Serial pc(USBTX, USBRX);

int main() {
	while(true) {
		pc.printf("%1.4f\n", in);
		wait(0.1);
	}
}