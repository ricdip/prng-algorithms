#include <stdio.h>
#include "xorshiftlfsr.h"

// A library that can do PRNG testing
#include <TestU01.h>

unsigned int test() {
    // Testing with default entropy
    return xorshift_lfsr(0);
}

int main(void) {
    // Create TestU01 PRNG object for our generator
    unif01_Gen* gen = unif01_CreateExternGenBits("xorshift-lfsr", test);

    // Run the tests (SmallCrush tests)
    bbattery_SmallCrush(gen);

    // Clean up
    unif01_DeleteExternGenBits(gen);

    return 0;
}