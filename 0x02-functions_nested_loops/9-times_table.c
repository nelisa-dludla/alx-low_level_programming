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
	int num1, num2;

	num1 = 0;

	while (num1 <= 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int result = num1 * num2;

			if (num2 == 9)
			{
				_putchar(result + '0');
				_putchar('\n');
			}
			else if (result < 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

		num1++;
	}
}
