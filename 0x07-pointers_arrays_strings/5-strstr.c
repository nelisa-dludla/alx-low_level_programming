#include "main.h"

#define NULL ((void *)0)

/*
 * This function locates a substring
 */

/**
 * _strstr - Function locates a substring
 * @haystack: Pointer parameter of string to be searched
 * @needle: Pointer parameter of string to be found
 * Return: Beginning of substring if found or else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (NULL);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
