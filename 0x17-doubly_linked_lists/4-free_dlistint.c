#include "lists.h"

/**
 * free_dlistint - Function frees dlistint_t list
 * @head: Head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
