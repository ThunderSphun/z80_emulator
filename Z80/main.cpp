#include "z80.hpp"
#include <iostream>

int main() {
	Z80_Emulator::Z80 tmp = Z80_Emulator::Z80();

	tmp.a = 10;
	tmp.f = 20;
	std::cout << std::hex << tmp.af << std::endl;

	return 0;
}