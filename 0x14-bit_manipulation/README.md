# 0x14. C - Bit Manipulation

This repository contains solutions to various bit manipulation problems in C programming. Each solution demonstrates how to perform different bit manipulation operations such as printing binary representation, getting the value of a bit at a given index, setting a bit to 1, and clearing a bit to 0.

## Solutions

### 1. Converting Binary to Unsigned Int

File: `0-binary_to_uint.c`

This solution provides a function to convert a binary string (composed of '0' and '1' characters) to an unsigned integer. It handles cases where the input contains characters other than '0' and '1' or when the input is NULL.

### 2. Printing Binary Representation

File: `1-print_binary.c`

This solution provides a function to print the binary representation of an unsigned long integer. It demonstrates how to iterate through the bits of a number and use bitwise operations to extract and print each bit.

### 3. Getting the Value of a Bit at a Given Index

File: `2-get_bit.c`

This solution includes a function to get the value of a specific bit at a given index. It uses bitwise AND operation to check the value of the bit at the specified index.

### 4. Setting a Bit to 1 at a Given Index

File: `3-set_bit.c`

Here, a function is provided that sets the value of a bit to 1 at a given index. It uses bitwise OR operation to achieve this while maintaining other bits unchanged.

### 5. Clearing a Bit to 0 at a Given Index

File: `4-clear_bit.c`

This solution includes a function to clear the value of a bit to 0 at a given index. It employs bitwise AND operation and bitwise NOT to achieve the desired result.

### 6. Counting Flipped Bits

File: `5-flip_bits.c`

This solution calculates the number of bits needed to flip to get from one number to another. It uses bitwise XOR to find the differing bits and counts them.

## Notes

These solutions are provided for educational purposes and serve as examples of bit manipulation techniques in C programming.

Feel free to explore, modify, and experiment with the code to enhance your understanding of bitwise operations and bit manipulation in C.
