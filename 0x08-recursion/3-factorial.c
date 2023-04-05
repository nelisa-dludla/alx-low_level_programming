#include "main.h"

/*
 * This function returns the factorial of a given number
 */

/**
 * factorial - Function returns the factorial of a given number
 * @n: Pointer parameter of integer
 * Return: Factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
