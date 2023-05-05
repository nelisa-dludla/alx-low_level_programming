#include "main.h"
#include <ctype.h>

/**
 * binary_to_uint - Function converts a binary number to an unsigned int
 * @b: Pointer to char to be converted
 * Return: itoa|| 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			uint = uint * 2;
		}
		else if (b[i] == '1')
		{
			uint = (uint * 2) + 1;
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}
