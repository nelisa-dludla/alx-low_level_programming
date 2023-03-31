#include "main.h"

/*
 * This function compares two strings
 */

/**
 * _strcmp - Function compares two strings
 * @s1: Pointer parameter for a string
 * @s2: Pointer parameter for a string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] && s1[i] == s2[i])
	{
		if (s1[i] != '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
