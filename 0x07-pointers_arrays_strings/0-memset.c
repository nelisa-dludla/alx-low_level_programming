#include "main.h"

/*
 * This function fills memory with a constant byte
 */

/**
 * _memset - Function fills memory with a constant byte
 * @s: Parameter pointer for a string
 * @b: Character variable
 * @n: Integer variable
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	if (n == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
