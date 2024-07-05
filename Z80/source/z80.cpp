#include <z80.hpp>

using namespace Z80_Emulator;

Z80::Z80() {
	init();
}

void Z80::init() {
	af = 0;
	a_f_ = 0;
	bc = 0;
	b_c_ = 0;
	de = 0;
	d_e_ = 0;
	hl = 0;
	h_l_ = 0;
	
	I = 0;
	R = 0;
	IX = 0;
	IY = 0;
	SP = 0;
	PC = 0;
}