#include "main.h"

/*
 * This functions prints the alphabet 10 times,
 * in lowercase, followed by a newline
 */

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lower case to stdout
 * Return: Void
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 1;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}
}
