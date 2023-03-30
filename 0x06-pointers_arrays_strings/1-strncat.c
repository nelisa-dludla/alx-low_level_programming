#include "main.h"

/*
 * This function concatenates two strings
 * It will use at most n bytes from the src string
 */

/**
 * _strncat - Function concatenates two strings
 * @dest: Pointer parameter for a string
 * @src: Pointer parameter for a string
 * @n: Numbers of bytes to be taken/used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';

	return (dest);
}
