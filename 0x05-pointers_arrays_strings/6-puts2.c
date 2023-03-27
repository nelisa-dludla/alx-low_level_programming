#include "main.h"

/*
 * This function prints every other character of a string,
 * starting with the first character, followed by a new line
 */

/**
 * puts2 - Function prints every other character of a string
 * @str: Pointer value
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
