#include "main.h"

/*
 * This function computes the absolute value of an integer
 */

/**
 * _abs - returns the absolute value of the integer
 * @num: integer to be evaluated
 * Return: 0 (Success)
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}

	return (0);
}
