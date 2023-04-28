#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		num_nodes++;

		h = h->next;
	}

	return (num_nodes);
}
