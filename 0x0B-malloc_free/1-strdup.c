#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * This function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 */

/**
 * _strdup - Function returns a pointer to newly allocated space
 * @str: Pointer parameter of a string
 * Return: (Success) || NULL (Failure)
 */

char *_strdup(char *str)
{
	char *new;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	new = (char *) malloc((len + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}

	new[len] = '\0';

	return (new);
}
