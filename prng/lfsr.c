#include "prng.h"

uint32_t lfsr32(uint32_t initial_state) {
    uint32_t i = 0;
    uint32_t state = initial_state;
    uint32_t period = sizeof(uint32_t) * 8;
    uint32_t newBitShift = period - 1;

    do {
        uint32_t newBit = ((state >> 0) ^ (state >> 2) ^ (state >> 3) ^ (state >> 5)) & 1U;

        state = (state >> 1) | (newBit << newBitShift);

    } while(++i < period);

    return state;
}