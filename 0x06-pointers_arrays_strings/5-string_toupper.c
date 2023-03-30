#include "main.h"

/*
 * This function changes all lowercase letters of a string to uppercase
 */

/**
 * string_toupper - Function changes lowercase letters of a string to uppercase
 * @str: Pointer parameter for a string
 * Return: string[i]
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
