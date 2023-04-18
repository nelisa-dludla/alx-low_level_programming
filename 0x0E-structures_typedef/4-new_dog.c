#include "dog.h"
#include <stdlib.h>
#include <string.h>

/*
 * This function creates a new dog
 */

/**
 * new_dog - Function creates a new dog
 * @name: Pointer paramter of a string
 * @age: Point paramter of a float
 * @owner: Point paramter of a string
 * Return: new_pup (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_pup;

	new_pup = malloc(sizeof(dog_t));
	if (new_pup == NULL)
	{
		return (NULL);
	}

	new_pup->name = strdup(name);
	if (name == NULL)
	{
		free(new_pup);
		return (NULL);
	}

	new_pup->owner = strdup(owner);
	if (owner == NULL)
	{
		free(new_pup->name);
		free(new_pup);
		return (NULL);
	}

	new_pup->age = age;

	return (new_pup);
}
