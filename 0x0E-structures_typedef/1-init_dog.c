#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/*
 * This function initializes a variable of type struct dog
 */

/**
 * init_dog - Function initalizes a variable of type struct dog
 * @d: Pointer paramter for struct dog
 * @name: Pointer paramter of a string
 * @age: Float
 * @owner: Pointer parameter of a string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = (char *) malloc(strlen(name) + 1);
	d->owner = (char *) malloc(strlen(owner) + 1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
