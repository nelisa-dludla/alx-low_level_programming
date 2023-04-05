#include "main.h"

/*
 * This function returns the length of a string
 */

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: Pointer parameter of string to be counted
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
