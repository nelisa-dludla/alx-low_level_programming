#include "main.h"

/*
 * This is a function that encodes a string using rot13
 */

/**
 * rot13 - Function encodes a string using rot13
 * @str: Pointer parameter for a string
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			j = (j + 13) % 26;
			str[i] = 'A' + j;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
			j = (j + 13) % 26;
			str[i] = 'a' + j;
		}
	}

	return (str);
}
