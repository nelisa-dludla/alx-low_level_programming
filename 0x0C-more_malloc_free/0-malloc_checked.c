#include "main.h"
#include <stdlib.h>

/*
 * This function allocates memory using malloc
 */

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Variable
 * Return: allo_mem (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *allo_mem;

	allo_mem = (void *) malloc((unsigned int)b);

	if (allo_mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (allo_mem);
	}
}
