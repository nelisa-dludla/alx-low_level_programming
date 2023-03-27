#include "main.h"

/*
 * This function prints a string, followed by a new line, to stdout
 */

/**
 * _puts - Function prints *str
 * @str: Pointer value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
