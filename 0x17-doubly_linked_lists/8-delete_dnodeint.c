#include "lists.h"

/**
 * delete_dnodeint_at_index - Function deletes the node
 * at index index of dlistint_t linked list
 * @head: Head node
 * @index: Index/position
 * Return: 1 (Success) / -1 (Failed)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int idx;

	if (head == NULL || *head == NULL)
		return (-1);

	currentNode = *head;
	idx = 0;

	if (index == 0)
	{
		*head = currentNode->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(currentNode);
		return (1);
	}

	while (currentNode != NULL)
	{
		if (index == idx)
		{
			if (currentNode->next != NULL)
			{
				currentNode->next->prev = currentNode->prev;
			}
			if (currentNode->prev != NULL)
			{
				currentNode->prev->next = currentNode->next;
			}
			free(currentNode);
			return (1);
		}
		currentNode = currentNode->next;
		idx++;
	}
	free(currentNode);
	return (-1);
}
