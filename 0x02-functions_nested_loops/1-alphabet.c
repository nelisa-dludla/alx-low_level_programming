#include "main.h"

/*
 * This function prints the alphabet, in lowercase,
 * followed by a new line
 */

/**
 * print_alphabet - Prints the alphabet in lowercase to stdout
 * Return: Void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
