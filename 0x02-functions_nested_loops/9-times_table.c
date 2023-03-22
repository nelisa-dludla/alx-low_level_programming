#include "main.h"

/*
 * This function prints 9 times table, starting with 0
 */

/**
 * times_table - Function will print th e9 times table
 * Return: Void
 */

void times_table(void)
{
	int num, multi;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			int res = num * multi;

			if (multi == 0)
			{
				_putchar(res + '0');
			}
			if (res <= 9 && multi != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
