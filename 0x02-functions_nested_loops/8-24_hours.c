#include "main.h"

/*
 * This function prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 */

/**
 * jack_bauer - Function prints every minute of the day
 * Return: Void
 */

void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
			_putchar(':');
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
			_putchar('\n');
		}
	}
}
