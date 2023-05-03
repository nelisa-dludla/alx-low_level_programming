#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function returns the number of elements in a linked list
 * @h: Pointer to head node
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		numNodes++;
	}

	return (numNodes);
}
