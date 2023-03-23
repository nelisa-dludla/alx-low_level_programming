#include "main.h"

/*
 * This function prints a square, followed by a new line
 */

/**
 * print_square - Function prints a square
 * @size: Determines the size of the square
 *
 * Return: Void
 */

void print_square(int size)
{
	int length, breadth;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (breadth = 0; breadth < size; breadth++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
