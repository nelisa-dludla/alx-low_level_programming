#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function inserts a new node at a given position
 * @head: pointer to pointer of head node
 * @idx: Index of node in list
 * @n: Value of newNode
 * Return: Address of newNode || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (idx == 0 || *head == NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		free(newNode);
		return (NULL);
	}

		newNode->n = n;
		newNode->next = current->next;
		current->next = newNode;

		return (newNode);
}
