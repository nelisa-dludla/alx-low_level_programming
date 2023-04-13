#include "main.h"
#include <stdlib.h>

/*
 * This function allocates memory for an array, using malloc
 */

/**
 * _calloc - Function allocate memory for an array
 * @nmemb: Number of elements
 * @size: Size of array
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
