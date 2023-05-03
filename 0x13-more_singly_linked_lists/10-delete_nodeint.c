#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function deletes the node at index
 * index of a listint_t linked list
 *
 * @head: Head Node
 *
 * @index: Index of a node
 *
 * Return: 1 (Success) || -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prevNode = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		prevNode = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	prevNode->next = current->next;
	free(current);

	return (1);
}
