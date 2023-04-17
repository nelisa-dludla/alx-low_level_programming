#include "dog.h"
#include <stdlib.h>

/*
 * This function frees dogs
 */

/**
 * free_dog - Function frees dogs
 * @d: Pointer paramter of a struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
