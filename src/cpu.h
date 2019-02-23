#ifndef cpu_H
#define cpu_H

#include <stdint.h>

class cpu{

    public:

    protected:

        // Registers and accumulators
        uint8_t A;
        uint8_t X;
        uint8_t Y;
        uint8_t F;
        uint8_t SP;
        uint16_t PC;

        // Main memory
        uint8_t RAM[2048];
};
#endif
