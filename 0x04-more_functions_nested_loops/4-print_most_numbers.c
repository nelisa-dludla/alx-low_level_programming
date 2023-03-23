#include "main.h"

/*
 * This function prints the numbers, 0 - 9,
 * except for 2 and 4
 * Followed by a new line
 */

/*
 * print_most_numbers - Function prints number 0 - 9 and not 2 and 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}
