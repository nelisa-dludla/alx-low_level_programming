#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function deletes the head node of the linked list,
 * and returns the head node’s data (n)
 *
 * @head: Pointer to the pointer of the head node
 *
 * Return: Head node's data (n) || 0 if head node is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
