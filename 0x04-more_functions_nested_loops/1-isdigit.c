#include "main.h"

/*
 * This function checks for a digit (0 through 9)
 */

/**
 * _isdigit - Function will check if digit is between 0 - 9
 * @c: number to be checked
 *
 * Return: 1 if c is a digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
