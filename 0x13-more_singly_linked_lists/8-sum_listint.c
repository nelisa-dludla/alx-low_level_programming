#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Function returns the sum of all the data (n) of a linked list
 * @head: Head node
 * Return: sum || 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
