#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * This function prints anything
 */

/**
 * print_all - Function prints anything
 * @format: type of input to be printed
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char c, *s;
	int i, pos;
	float f;

	va_start(args, format);
	while (format[pos] != '\0')
	{
		switch (format[pos])
		{
		case 'c':
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;

		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;

		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;

		case 's':
			s = va_arg(args, char *);
			printf("%s", s);
			break;

		default:
			pos++;
			continue;
		}
		pos++;
		if (format[pos] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
