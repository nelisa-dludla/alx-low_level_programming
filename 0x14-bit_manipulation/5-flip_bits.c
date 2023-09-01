#include "main.h"
#include <stdio.h>

/**
 * flip_bits - This functions returns the number of bits you would need to flip
 * to get from one number to another
 * @n: Unsigned long int
 * @m: Unsigned long int
 * Return: Count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result > 0)
	{
		count = count + (xor_result & 1);
		xor_result = xor_result >> 1;
	}
	return (count);
}
