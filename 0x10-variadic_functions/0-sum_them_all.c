#include "variadic_functions.h"
#include <stdarg.h>

/*
 * This function returns the sum of all its parameters
 */

/**
 * sum_them_all - Function returns the sum of all it's parameters
 * @n: number of paramters
 * Return: sum (Success) || 0 (Failure)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
