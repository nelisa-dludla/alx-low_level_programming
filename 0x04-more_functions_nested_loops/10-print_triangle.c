#include "main.h"

/*
 * This function prints a triangle, followed by a new line
 */

/**
 * print_triangle - Function prints a triangle
 * @size: Determines the size of the triangle
 *
 * Return: Void
*/

void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row -1; space++)
			{
				_putchar(' ');
			}
			for (col = 0; col <= row; col++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
