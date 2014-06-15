#include "mbed.h"

AnalogIn in(A0);
PwmOut out(LED1);

void update() {
    out = in;
}

int main() {
    out.period(0.01);
    
    while(true) {
        update();
    }
}