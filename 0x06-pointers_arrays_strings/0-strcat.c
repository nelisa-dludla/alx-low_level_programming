#include "main.h"

/*
 * This function concatenates two strings
 */

/**
 * _strcat - Function concatenates two strings
 * @dest: Pointer parameter for string
 * @src: Pointer parameter for string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';

	return (dest);
}
