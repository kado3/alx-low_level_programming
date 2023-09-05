#!/bin/bash
# Compile all .c files in the current directory
gcc -c *.c
# Create a static library from the compiled object files
ar -rc liball.a *.o
# Index the library for faster linking (optional but recommended)
ranlib liball.a
# Clean up the temporary object files
rm *.o
echo "Static library liball.a created successfully!"
