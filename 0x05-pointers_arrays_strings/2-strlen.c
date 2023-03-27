#include "main.h"

/*
 * This function return the length of a string
 */

/**
 * _strlen - Function returns the length of *s
 * @s: Pointer Value with string inside
 * Return: count
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
