#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: convertedInt
 */

unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int convertedInt;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);
	convertedInt = 0;

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
			convertedInt = convertedInt << 1;

		else if (b[i] == '1')
			convertedInt = (convertedInt << 1) | 1;

		else
			return (0);
	}
	return (convertedInt);
}
