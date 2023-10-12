#include "lists.h"

/**
 * sum_dlistint - Function returns sum of all data (n)
 * of dlistint_t linked list
 * @head: Head node
 * Return: sum / 0 (if empty)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	currentNode = head;
	sum = 0;

	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
