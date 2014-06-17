#include "mbed.h"

DigitalOut led(LED1);
Serial pc(USBTX, USBRX);

int main() {
	while(true) {
		switch(pc.getc()) {
			case 'H':
				led = 1;
				break;
			case 'L':
				led = 0;
				break;
		}
	}
}