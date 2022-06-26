# prng-algorithms

Implementations of pseudo-random number generators.

## Algorithms

- XorshiftLfsr: A combination of XORSHIFT and LFSR (linear-feedback shift register)

## Testing with TestU01

- It is used [TestU01](http://simul.iro.umontreal.ca/testu01/tu01.html) for testing the PRNGs

## Run

- Compile and run XorshiftLfsr example: generation of a random number in the interval [0, 4)

```bash
make build
make run
```

- Compile and run XorshiftLfsr SmallCrush tests with TestU01

```bash
make build_test
make run_test
```

## Clean executables

```bash
make clean
```

## Results

- XorshiftLfsr: passes all SmallCrush tests (using TestU01 for testing)
