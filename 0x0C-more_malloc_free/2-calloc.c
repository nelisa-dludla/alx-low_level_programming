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
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
