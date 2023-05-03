#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function adds a new node at the end of the list
 * @head: Pointer to a pointer to head node
 * @n: int value to be added inside new node
 * Return: Address of the new element (Success) || Null (Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = (listint_t *) malloc(sizeof(listint_t));

		if (*head == NULL)
		{
			return (NULL);
		}

		(*head)->n = n;
		(*head)->next = NULL;

		return (*head);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = (listint_t *) malloc(sizeof(listint_t));
	if (current->next == NULL)
	{
		return (NULL);
	}

	current->next->n = n;
	current->next->next = NULL;

	return (current->next);
}
