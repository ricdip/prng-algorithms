#include <stdio.h>
#include "xorshiftlfsr.h"

#include <unistd.h>

int main(void) {
    // Generate a random number in [0, 4) using a combination of
    // XORSHIFT and LFSR.
    // getpid() is used as entropy.
    uint32_t rd = xorshift_lfsr(getpid()) % 4;

    printf("%u\n", rd);

    return 0;
}