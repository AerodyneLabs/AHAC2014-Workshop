#ifndef FADER_H_
#define FADER_H_

#include "mbed.h"

class Fader {
public:
    Fader(PinName in, PinName out);
    void update();

private:
    AnalogIn _in;
    PwmOut _out;
};

#endif