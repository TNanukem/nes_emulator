// *****************************************************************************
// This header was created to define MACROS that will allows us to do bit
// operations with ease in our code
// *****************************************************************************


// CPU Flags
#define SET_CARRY 0x00000001
#define CLEAR_CARRY 0x11111110
#define SET_ZERO 0x00000010
#define CLEAR_ZERO 0x11111101
#define SET_INTERRUPT_DISABLE 0x00000100
#define CLEAR_INTERRUPT_DISABLE 0x11111011
#define SET_OVERFLOW 0x01000000
#define CLEAR_OVERFLOW 0x10111111
#define SET_NEGATIVE 0x10000000
#define CLEAR_NEGATIVE 0x01111111
