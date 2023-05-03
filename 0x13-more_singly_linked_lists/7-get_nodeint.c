#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function returns the nth node of the linked list
 * @head: Head node
 * @index: Index of the node in the list
 * Return: nth node || NULL if nth node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
