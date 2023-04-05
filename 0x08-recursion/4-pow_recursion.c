#include "main.h"

/*
 * This function returns the value of x raised to the power of y
 */

/**
 * _pow_recursion - Function returns the value of x^y
 * @x: Paramter of an integer to be raised
 * @y: Parameter of the power
 * Return: Value of x^y || -1 when there's an error
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
