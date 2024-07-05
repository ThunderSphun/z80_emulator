#pragma once

#include <cstdint>

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define Z80_REG(A, B) union { \
    struct {                  \
        uint8_t B;            \
        uint8_t A;            \
    };                        \
    uint16_t A ## B{};        \
}
#else
#define Z80_REG(A, B) union { \
	struct {                  \
		uint8_t A;            \
		uint8_t B;            \
	};                        \
	uint16_t A ## B{};        \
}
#endif

namespace Z80_Emulator {
	class Z80 {
	public:
		Z80();

		void init();
	public:
		Z80_REG(a, f);
		Z80_REG(a_, f_);
		Z80_REG(b, c);
		Z80_REG(b_, c_);
		Z80_REG(d, e);
		Z80_REG(d_, e_);
		Z80_REG(h, l);
		Z80_REG(h_, l_);

		uint8_t I{};
		uint8_t R{};
		uint16_t IX{};
		uint16_t IY{};
		uint16_t SP{};
		uint16_t PC{};
	};
}

#undef Z80_REG