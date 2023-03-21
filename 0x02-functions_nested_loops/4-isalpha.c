#include "main.h"

/*
 * This function checks for a alphabetic character
 */

/**
 * _isalpha - function that will check for the alphabetic character
 * @c: The character to be checked
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
