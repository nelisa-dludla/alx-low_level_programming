#include "main.h"

/*
 * This function prints the sign of number
 */

/**
 * print_sign - Function that will print the sign
 * @n: Character the sign will be deteremined by
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
