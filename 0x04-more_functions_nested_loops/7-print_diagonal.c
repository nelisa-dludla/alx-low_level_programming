#include "main.h"

/*
 * This function draws a diagonal line on the terminal
 */

/**
 * print_diagonal - Function prints a diagonal line
 * @n: Determines the length of the line
 *
 * Return: Void
*/

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line - 1 + 1; space++)
			{
				_putchar('.');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
