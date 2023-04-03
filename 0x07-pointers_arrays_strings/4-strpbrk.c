#include "main.h"

#define NOT_FOUND ((char *)0)

/*
 * This function searches a string for any set of bytes
 */

/**
 * _strpbrk - Function searches a string for any set of bytes
 * @s: Pointer parameter for a string
 * @accept: Character variable to look for
 * Return: Character if found or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NOT_FOUND || accept == NOT_FOUND || s[0] == '\0')
	{
		return (NOT_FOUND);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NOT_FOUND);
}
