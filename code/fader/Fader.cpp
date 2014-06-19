#include "Fader.h"

Fader::Fader(PinName in, PinName out) : _in(in), _out(out) {
	_out.period(0.01);
}
	
void Fader::update() {
	_out = _in;
}