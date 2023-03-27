#include "main.h"

/*
 * This function copies the string pointed to by src, including
 * the null byte (\0), to the buffer pointed to by dest
 * Return value: the pointer to dest
 */

/**
 * _strcpy - Function copies a string from src to dest
 * @dest: Pointer waiting for input to be fed into it
 * @src: Pointer value
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
