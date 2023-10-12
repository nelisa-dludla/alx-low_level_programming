#include "lists.h"

/**
 * add_dnodeint - Function adds a newNode at the
 * beginning of a doubly linked list
 * @head: Head node
 * @n: Value
 * Return: Address of node (Success) / NULL (Failed)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
