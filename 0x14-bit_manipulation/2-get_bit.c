#include "main.h"
#include <stdio.h>

/**
 * get_bit - TThis function returns the value of a bit at a given index
 * @n: Decimal number
 * @index: Index
 * Return: Value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index <= sizeof(n) * 8)
	{
		mask = 1UL << index;
		if (n & mask)
			return (1);
		else
			return (0);
	}
	else
		return (-1);
}
