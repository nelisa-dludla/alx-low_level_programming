#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns the nth
 * node of a linked list
 * @head: Head node
 * @index: Index of node
 * Return: Node (Success) / NULL (Falied)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int idx;

	currentNode = head;
	idx = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (currentNode != NULL)
	{
		if (idx == index)
		{
			return (currentNode);
		}
		currentNode = currentNode->next;
		idx++;
	}
	return (NULL);
}
