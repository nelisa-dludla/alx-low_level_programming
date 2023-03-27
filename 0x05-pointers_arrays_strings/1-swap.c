#include "main.h"

/*
 * This function swaps the value of two integers
 */

/**
 * swap_int - Function swaps the values of *a and *b
 * @a: Pointer value
 * @b: Pointer value
*/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
