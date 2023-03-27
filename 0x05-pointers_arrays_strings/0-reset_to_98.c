#include "main.h"

/*
 * This function takes a pointer to an int as a parameter and
 * updates the value it points to, to 98
 */

/**
 * reset_to_98 - Function updates value of *n to 98
 * @n: Parameter to be passed through the function
 */

void reset_to_98(int *n)
{
	int o = 98;
	*n = o;
}
