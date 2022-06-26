# compiler options
CC = gcc
CFLAGS = -pedantic -Wall -Wextra -Werror -g
TESTU01FLAGS = -ltestu01 -lprobdist -lmylib -lm

# sources and objects
SRC = prng/xorshift.c prng/lfsr.c xorshiftlfsr.c main.c
TESTSRC = prng/xorshift.c prng/lfsr.c xorshiftlfsr.c test.c
OBJ = main.exe
TESTOBJ = test.exe

.DEFAULT_GOAL: help

# rules
.SILENT: help
help:
	printf "%s \\t\\t %s\n" "help" "show this help message"
	printf "%s \\t\\t %s\n" "all" "build, run and clean application"
	printf "%s \\t\\t %s\n" "clean" "clean application"
	printf "%s \\t\\t %s\n" "build" "build application"
	printf "%s \\t %s\n" "build_test" "build testing application (testing using TestU01)"
	printf "%s \\t\\t %s\n" "run" "run application"
	printf "%s \\t %s\n" "run_test" "run testing application"

build: $(SRC)
	@echo "Building application files..."
	$(CC) -o $(OBJ) $(SRC) $(CFLAGS)


build_test: $(TESTSRC)
	@echo "Building testing application files..."
	$(CC) -o $(TESTOBJ) $(TESTSRC) $(CFLAGS) $(TESTU01FLAGS)

clean:
	@echo "Cleaning application files..."
	rm -f $(OBJ)
	rm -f $(TESTOBJ)

run: $(OBJ)
	@echo "Running application..."
	./$(OBJ)

run_test: $(TESTOBJ)
	@echo "Running testing application..."
	./$(TESTOBJ)

all: clean build run clean


.PHONY: help build build_test clean run run_test all