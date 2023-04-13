#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * This function concatenates two strings
 */

/**
 * string_nconcat - Function concatenates two strings
 * @s1: Pointer parameter of dest string
 * @s2: Pointer parameter of src string
 * @n: Number of characters to be copied
 * Return: con_str (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int str_len1, str_len2;

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= str_len2)
	{
		n = str_len2;
	}

	con_str = (char *) malloc((str_len1 + n + 1) * sizeof(char));
	if (con_str == NULL)
	{
		return (NULL);
	}

	strcpy(con_str, s1);
	strncat(con_str, s2, n);

	con_str[str_len1 + n] = '\0';
	return (con_str);
}
