#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Function adds a new node at the beginning of the list
 * @head: Pointer to the pointer head node
 * @n: int value to be added inside new node
 * Return: Address of the new element (Success) || NULL (Failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
