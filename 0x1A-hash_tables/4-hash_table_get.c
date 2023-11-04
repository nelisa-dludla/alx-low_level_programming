#include "hash_tables.h"
/**
 * hash_table_get - Function retrieves a value associated with a key
 * @ht: Hash table value with be retrieved from
 * @key: The key
 * Return: The value (Success) / NULL (Key cannot be found - Failure)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	index = key_index((const unsigned char *) key, ht->size);

	element = ht->array[index];
	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			return (element->value);
		}
		element = element->next;
	}
	return (NULL);
}

