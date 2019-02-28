// *****************************************************************************
// This class main objective is the represent the original NES CPU which is a
// MOS 6502 microchip.
// *****************************************************************************

#ifndef cpu_H
#define cpu_H

#include <stdint.h>
#include "opcodeIdentifier.h"

class cpu{

    public:

        // Constructor
        cpu();

        void incrementPC();
        void updateMemory();

        // Setting the CPU flags
        void setCarry();

        // Getters functions
        uint8_t getA();
        uint8_t getX();
        uint8_t getY();
        uint8_t getF();
        uint8_t getSP();
        uint8_t getPC();

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

        // The CPU needs an opcodeIdentifier in order to run
        opcodeIdentifier opcoder;

        // This will be a future class responsible for reading the ROM archive
        //ROMLoader ROMLoad
};
#endif
