#include "mbed.h"

DigitalOut led(LED1);
Serial pc(USBTX, USBRX);

void handler(char in) {
	switch(in) {
		case 'H':
			led = 1;
			break;
		case 'L':
			led = 0;
			break;
	}
}

int main() {
	while(true) {
		handler(pc.getc());
	}
}