#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function prints all the elements of a listint_t list
 * @h: Pointer to head node
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned numNodes = 0;
	const listint_t *current = h;

	if (h == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		numNodes++;
	}

	return (numNodes);
}
