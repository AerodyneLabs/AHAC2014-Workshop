#include "mbed.h"

DigitalOut led(LED1);
Serial pc(USBTX, USBRX);

void handler(char in) {
	switch(in) {
		case 'H':
			led = 1;
		case 'L':
			led = 0;
	}
}

int main() {
	while(true) {
		handler(pc.getc());
	}
}