#include "Fader.h"

Fader fader(A0, LED1);

int main() {
	while(true) {
		fader.update();
	}
}