#include "main.h"

/*
 * This function prints a string, in reverse, followed by a new line
 */

/**
 * print_rev - Function prints a string in reverse
 * @s: Pointer value
 */

void print_rev(char *s)
{
	int count, i;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
