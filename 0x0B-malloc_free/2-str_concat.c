#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * This function concatenates two strings
 */

/**
 * str_concat - Function concatenates two strings
 * @s1: Pointer parameter for a string
 * @s2: Pointer parameter for a string
 * Return: new (Success) || NULL (Failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int len1, len2, len_tot, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	len_tot = len1 + len2;

	new = (char *) malloc((len_tot + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		new[len1 + i] = s2[i];
	}

	new[len_tot] = '\0';

	return (new);
}
