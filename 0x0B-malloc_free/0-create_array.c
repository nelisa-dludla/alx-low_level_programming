#include "main.h"
#include <stdlib.h>

/*
 *  This function creates an array of chars,
 *  and intializes it with a specific chars
 */

/**
 * create_array - Function creates an array of chars
 * @size: Pointer parameter for size
 * @c: Pointer parameter for char
 * Return: NULL if size = 0 || Pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
