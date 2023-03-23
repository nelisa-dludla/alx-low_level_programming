#include "main.h"

/*
 * This function draws a straight line
 */

/**
 * print_line - Function draws a straight line
 * @n: Determines the length of the line
 *
 * Return: Void
 */

void print_line(int n)
{
	int line;

	for (line = 1; line <= n && line != 0; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
