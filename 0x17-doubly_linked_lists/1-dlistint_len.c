#include "lists.h"

/**
 * dlistint_len - Function returns number of elements in a doubly linked list
 * @h: Head node
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
