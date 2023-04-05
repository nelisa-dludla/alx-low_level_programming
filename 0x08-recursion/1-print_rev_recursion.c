#include "main.h"

/*
 * This function prints a string in reverse
 */

/**
 * _print_rev_recursion - Function prints a string in reverse
 * @s: Pointer parameter for a string
 * Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
