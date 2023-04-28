#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function prints all the elements of a list-t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
