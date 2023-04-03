#include "main.h"

/*
 * This function print the chessboard
 */

/**
 * print_chessboard - Function prints the chessboard
 * @a: Pointer parameter for an array
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
