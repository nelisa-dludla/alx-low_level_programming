#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at a given index
 * @n: Pointer to int to be modified
 * @index: Index of bit to be modified
 * Return: 1 (Success) || -1 (Error/Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, bits;

	bits = sizeof(unsigned long int) * 8;

	if (n == NULL || index >= bits)
	{
		return (-1);
	}

	mask = 1 << index;

	*n |= mask;

	return (1);
}
