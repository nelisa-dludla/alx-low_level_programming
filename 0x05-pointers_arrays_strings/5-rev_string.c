#include "main.h"

/*
 * This function reverses a string
 */

/**
 * rev_string - Function reverses a string
 * @s: Pointer value
 */

void rev_string(char *s)
{
	int count, i;

	char temp;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
