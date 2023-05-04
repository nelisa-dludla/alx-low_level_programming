#include "lists.h"

/**
 * reverse_listint - Function reverses a listint_t linked list
 * @head: Pointer to pointer of head node
 * Return: Pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode, *current;

	prevNode = NULL;
	nextNode = NULL;
	current = *head;


	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		nextNode = current->next;
		current->next = prevNode;
		prevNode = current;
		current = nextNode;
	}

	*head = prevNode;

	return (*head);
}
