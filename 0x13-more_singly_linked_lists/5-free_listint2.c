#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees the list
 * @head: Pointer to the pointer of head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
	{
		return;
	}

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
