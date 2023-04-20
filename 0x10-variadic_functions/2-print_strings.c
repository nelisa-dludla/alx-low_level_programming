#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * This function prints strings, followed by a new line
 */

/**
 * print_strings - Function prints strings, followed by a new linw
 * @separator: String to be printed between the strings
 * @n: Number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *j;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);

		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
