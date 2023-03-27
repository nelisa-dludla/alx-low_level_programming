#include "main.h"

/*
 * This function prints the second half of a string,
 * followed by a new line.
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 */

/**
 * puts_half - Function prints half of a string
 * @str: Pointer value
 */

void puts_half(char *str)
{
	int count, i, n;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	n = (count - 1) / 2;

	if (count % 2 == 0)
	{
		for (i = (count / 2); i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
