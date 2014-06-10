#include "mbed.h"

class Fader {
public:
    Fader(PinName in, PinName out) : _in(in), _out(out) {
        _out.period(0.01);
    }
    
    void update() {
        _out = _in;
    }

private:
    AnalogIn _in;
    PwmOut _out;
};

Fader fader(A0, LED1);

int main() {
    while(true) {
        fader.update();
    }
}