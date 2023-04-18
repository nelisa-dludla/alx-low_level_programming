#include <stdio.h>
#include "dog.h"

/*
 * This function prints a struct dog
 */

/**
 * print_dog - Function prints out struct dog
 * @d: Pointer parameter for struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}


	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
