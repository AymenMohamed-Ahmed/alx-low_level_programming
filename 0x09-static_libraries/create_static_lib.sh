#!/bin/bash

# Compile each .c file to .o (object) files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up by removing the compiled object files
rm -f *.o
