#include <stdio.h>

/*
 * This program prints the name of the file it was compiled from,
 * followed by a new line
 */

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
