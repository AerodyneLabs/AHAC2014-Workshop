#include "mbed.h"

AnaloglIn in(A0);
Serial pc(USBTX, USBRX);

int main() {
	while(true) {
		pc.printf("%1.4f\n", in.read());
		wait(0.1);
	}
}
