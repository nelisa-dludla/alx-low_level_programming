#include "main.h"

/*
 * This function copies memory area
 */

/**
 * _memcpy - Function copies memory area
 * @dest: Pointer parameter for copied memory
 * @src: Pointer parameter of target memory
 * @n: Integer variable of how many bytes should be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
