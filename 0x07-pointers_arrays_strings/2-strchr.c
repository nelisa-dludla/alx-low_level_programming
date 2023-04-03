#include "main.h"

/*
 * This function locates a character in a string
 */

/**
 * _strchr - Function locates a character in a string
 * @s: Pointer parameter for a string
 * @c: Character variable to be found in a string
 * Return: s if character is found or \0 if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
