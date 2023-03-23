#include "main.h"

/*
 * This function checks for a uppercase character
 */

/**
 * _isupper - Function to check if character is uppercase
 * @c: Character to be checked
 * Return: 1 if uppercase; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
