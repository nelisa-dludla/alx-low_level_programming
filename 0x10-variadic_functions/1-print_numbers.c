#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * This function prints numbers, followed by a new line
 */

/**
 * print_numbers - Function prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of paramters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			j = va_arg(args, int);
			printf("%d ", j);
		}
		else
		{
			j = va_arg(args, int);
			printf("%d%s", j, separator);
		}
	}
	va_end(args);
	printf("\n");
}
