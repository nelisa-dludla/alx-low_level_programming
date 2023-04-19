#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include "function_pointers.h"
#include <stdlib.h>

/*
 * This function prints a name
 */

/**
 * print_name - Function prints a name
 * @name: Pointer parameter for a string
 * @f: Pointer paramter for a function
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

#endif /* FUNCTION_POINTERS_H */
