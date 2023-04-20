#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * This function prints anything
 */

/**
 * print_char - Prints a single character
 * @c: Character to be printed
 */

void print_char(int c)
{
	printf("%c", (char)c);
}

/**
 * print_int - Prints an integer
 * @i: Integer to be printed
 */

void print_int(int i)
{
	printf("%i", i);
}

/**
 * print_float - Prints a float
 * @f: FLoat to be printed
 */

void print_float(double f)
{
	printf("%f", f);
}

/**
 * print_string - Prints a string
 * @s: String to be printed
 */

void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - Function prints anything
 * @format: type of input to be printed
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s", separator);
			print_char(va_arg(args, int));
			break;

		case 'i':
			printf("%s", separator);
			print_int(va_arg(args, int));
			break;

		case 'f':
			printf("%s", separator);
			print_float(va_arg(args, double));
			break;

		case 's':
			printf("%s", separator);
			print_string(va_arg(args, char *));
			break;

		default:
			break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
