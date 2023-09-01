#include "main.h"
#include <stdio.h>

/**
 * clear_bit - This function sets the value of a bit to 0 at a given index
 * @n: Unsigned long int
 * @index: Index
 * Return: 1 (Success) | -1 (Failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index <= sizeof(*n) * 8)
	{
		mask = ~(1UL << index);
		*n = *n & mask;
		return (1);
	}
	else
		return (-1);
}
