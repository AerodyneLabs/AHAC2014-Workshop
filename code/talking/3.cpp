#include "mbed.h"

DigitalOut led(LED1);
Serial pc(USBTX, USBRX);

void handler(char in);
void sing();

int main() {
	while(true) {
		handler(pc.getc());
	}
}

void handler(char in) {
	switch(in) {
		case 'H':
			led = 1;
			break;
		case 'L':
			led = 0;
			break;
		case 'S':
			sing();
			break;
	}
}

void sing() {
	for(int i = 'a'; i <= 'z'; i++) {
		pc.printf("%c", i);
		wait(0.1);
	}
}