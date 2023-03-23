#include "main.h"

/*
 * This function prints the numbers, from 0 to 9,
 * followed by a new line
 */

/**
 * print_numbers - Function prints number from 0 - 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
