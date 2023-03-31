#include "main.h"

/*
 * This function capitalizes all the words of a string
 */

/**
 * cap_string - Function capitalizes all the words of a string
 * @str: Pointer parameter for a string
 * Return: Str
 */

char *cap_string(char *str)
{
	int i, j;

	i = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == '\t')
		{
			str[j] = ' ';
		}
	}

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}

		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
		|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
		|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
		|| str[i - 1] == '}')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
