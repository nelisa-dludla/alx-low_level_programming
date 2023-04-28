#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Function adds a new node at the end of a list_t list
 * @head: Pointer to a pointer
 * @str: Pointer to a string
 * Return: Address of the new pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_tail = malloc(sizeof(list_t));

	if (new_node_tail == NULL)
	{
		return (NULL);
	}

	new_node_tail->str = strdup(str);
	new_node_tail->len = strlen(str);
	new_node_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_tail;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node_tail;
	}



	return (new_node_tail);
}
