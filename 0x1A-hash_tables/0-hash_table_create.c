#include "hash_tables.h"
/**
 * hash_table_create - Function creates a hash table
 * @size: The size of the hash table
 * Return: Pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *result;

	result = malloc(sizeof(hash_table_t));
	if (result == NULL)
		return (NULL);

	result->size = size;
	result->array = malloc(sizeof(hash_node_t) * size);
	if (result->array == NULL)
	{
		free(result);
		return (NULL);
	}

	if (result->array == NULL)
		return (NULL);

	return (result);
}

