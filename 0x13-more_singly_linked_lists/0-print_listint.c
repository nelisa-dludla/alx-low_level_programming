#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function prints all the elements of a listint_t list
 * @h: Pointer to head node
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		numNodes++;
	}

	return (numNodes);
}
