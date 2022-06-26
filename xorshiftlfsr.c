#include "xorshiftlfsr.h"

uint32_t _q1 = 563642356U;

uint32_t _count = 0;

uint32_t _entropy = 98347829U;

uint32_t xorshift_lfsr(uint32_t entropy) {
    if(entropy > 0) {
        _entropy = entropy;
    }

    uint32_t res =  xorshift32(_entropy) + (_q1 * lfsr32(++_count));

    _entropy = res;

    return res;
}