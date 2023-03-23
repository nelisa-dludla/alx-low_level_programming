#include "main.h"

/*
 * This function prints 10 times the numbers, from 0 - 14,
 * followed by a new line
 */

/**
 * more_numbers - Function will print numbers 0 -14, 10 times
 *
 * Return: Void
*/

void more_numbers(void)
{
	int row, num;

	row = 0;

	while (row < 11)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		row++;
		_putchar('\n');
	}
}
