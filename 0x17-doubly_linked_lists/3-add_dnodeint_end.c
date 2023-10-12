#include "lists.h"

/**
 * add_dnodeint_end - Function adds a new node at the
 * end of a list
 * @head: Head node
 * @n: Value/Data
 * Return: Address of node (Success) / NULL (Failed)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *currentNode;

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
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;

	return (newNode);
}
