#include "main.h"
#include <limits.h>

/*
 * This function prints the last digit of a number
 */

/**
 * print_last_digit - function prints the last digit of given number
 * @num: last digit will be printed from this number
 * Return: Last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num == INT_MIN)
	{
		_putchar('8');
		return (8);
	}
	if (num < 0)
	{
		num = num * -1;
	}

	last_digit = num % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
