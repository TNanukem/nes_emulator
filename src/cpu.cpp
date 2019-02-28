#include "cpu.h"
#include "masks.h"

void cpu::incrementPC(){
    PC += 2;
}

void cpu::updateMemory(){
    // This function will update the memory when necessary
}

// Setting the cpu Flags
void cpu::setCarry(){
    F | SET_CARRY
}

// Constructor
cpu::cpu(){
    A = 0;
    X = 0;
    Y = 0;
    F = 0;
    PC = 0x8000;
    SP = 0xFF;
}

// Getters functions -> Standard implementation
uint8_t cpu::getX(){
    return X;
}

uint8_t cpu::getY(){
    return Y;
}

uint8_t cpu::getF(){
    return F;
}

uint8_t cpu::getSP(){
    return SP;
}

uint8_t cpu::getPC(){
    return PC;
}
