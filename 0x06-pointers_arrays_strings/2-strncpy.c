#include "main.h"

/*
 * This function copies a string
 * Works exactly like strncpy
 */

/**
 * _strncpy - Function copies a string
 * @dest: Pointer parameter for a string
 * @src: Pointer parameter for a string
 * @n: Number of bytes to be taken/used from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (;i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
