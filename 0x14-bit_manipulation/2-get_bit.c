#include "main.h"

/**
 * get_bit - Function returns the value of a bit at a given index
 * @n: int to be looked at
 * @index: Index of bit to be returneed
 * Return: value of bit at 'index' || -1 for an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, bits;

	bits = sizeof(unsigned long int) * 8;

	if (n == 0 || index >= bits)
	{
		return (-1);
	}

	mask = 1 << index;

	return ((n & mask) ? 1 : 0);
}
