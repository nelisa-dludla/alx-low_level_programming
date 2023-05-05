#include "main.h"

/**
 * flip_bits - Function returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: First int to be looked at
 *
 * @m: int to be compared with n
 *
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, xorResult;
	unsigned int count;

	if (n == 0 || m == 0)
	{
		return (0);
	}

	mask = 1;
	xorResult = n ^ m;
	count = 0;

	while (mask != 0)
	{
		if (xorResult & mask)
		{
			count++;
		}
		mask <<= 1;
	}

	return (count);
}
