#include "hash_tables.h"
/**
 * key_index - Function gives you the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index where the key/value is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue = hash_djb2(key);

	unsigned long int index = hashValue % size;

	return (index);
}

