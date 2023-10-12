#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts a new node
 * at a given position
 * @h: Head node
 * @idx: Position where node should go
 * @n: Value/data
 * Return: Address of node (Success) / NULL (Failed)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int index = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
}
