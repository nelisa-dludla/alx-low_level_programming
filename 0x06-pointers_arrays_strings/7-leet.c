#include "main.h"

/*
 * This function encodes a string into 1337
 * Letters a and A will be replaced by 4
 * Letters e and E will be replaced by 3
 * Letters o and O will be replaced by 0
 * Letters t and T will be replaced by 7
 * Letters l and L will be replaced by 1
 */

/**
 * leet - Function encodes a string into 1337
 * @str: Pointer parameter for a string
 * Return: str
 */

char *leet(char *str)
{
	char *leet_chars = "43107";
	char *leet_letters = "aeotlAEOTL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_chars[j / 2];
				break;
			}
		}
	}

	return (str);
}
