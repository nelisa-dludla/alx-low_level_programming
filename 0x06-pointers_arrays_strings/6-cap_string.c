#include "main.h"

/*
 * This function capitalizes all the words of a string
 */

/**
 * cap_string - Function capitalizes all the words of a string
 * @s: Pointer parameter for a string
 * Return: Str
 */

char *cap_string(char *s)
{
	int i;
	char *str = s;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
			|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
			|| str[i - 1] == '(' || str[i - 1] == ')'
			|| str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (s);
}
