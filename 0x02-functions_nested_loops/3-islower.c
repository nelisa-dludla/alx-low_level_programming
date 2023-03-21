#include "main.h"

/*
 * This function checks for a lowercase character
 */

/**
 * _islower - Will check if a character is lowercase
 * @c: The character to be checked
 * Return: Alays 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
