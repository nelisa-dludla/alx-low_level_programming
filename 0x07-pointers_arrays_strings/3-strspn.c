#include "main.h"

/*
 * This function gets the length of a prefix substring
 */

/**
 * _strspn - Function gets the length of a prefix substring
 * @s: Pointer parameter of string to be counted
 * @accept: Pointer parameter of bytes to be counted
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, found;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break;
		}
		i++;
	}

	return (count);
}
