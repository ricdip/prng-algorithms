#include "prng.h"

uint32_t xorshift32(uint32_t initial_state) {
    uint32_t x = initial_state;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;

    return x;
}