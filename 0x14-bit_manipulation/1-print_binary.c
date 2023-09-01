#include "main.h"
#include <stdio.h>

/**
 * print_binary - This function prints the binary representation of a number
 * @n: a pointer to a decimal number
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(n) * 8 - 1);
	while (mask > 0 && (n & mask) == 0)
		mask = mask >> 1;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
