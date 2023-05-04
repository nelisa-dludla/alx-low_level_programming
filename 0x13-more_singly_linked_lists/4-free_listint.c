#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees the list
 * @head: Pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
