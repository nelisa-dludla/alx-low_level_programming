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
		printf("Name: (nil)\n");
	}

	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
