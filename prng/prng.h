#ifndef PRNG_H
#define PRNG_H

#include <stdint.h>

/**
 * @brief An implementation of the XORSHIFT PRNG that uses 32 bit integers
 * 
 * @param initial_state The initial state of the algorithm
 * @return uint32_t Output of the algorithm
 */
uint32_t xorshift32(uint32_t initial_state);

/**
 * @brief An implementation of the LFSR PRNG (linear-feedback shift register) that uses 32 bit integers
 * 
 * @param initial_state The initial state of the algorithm
 * @return uint32_t Output of the algorithm
 */
uint32_t lfsr32(uint32_t initial_state);

#endif