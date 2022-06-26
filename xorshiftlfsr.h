#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "prng/prng.h"

/**
 * @brief Fixed quantity used during computation to improve randomness
 * 
 */
extern uint32_t _q1;

/**
 * @brief Quantity incremented every function call to improve randomness during sequential calls
 * 
 */
extern uint32_t _count;

/**
 * @brief Quantity used as a starting state during computation
 * 
 */
extern uint32_t _entropy;

/**
 * @brief Algorithm that combines XORSHIFT and LFSR (linear-feedback shift register)
 * 
 * @param entropy Quantity used as a starting state during computation
 * @return uint32_t Output of the algorithm
 */
uint32_t xorshift_lfsr(uint32_t entropy);

#endif