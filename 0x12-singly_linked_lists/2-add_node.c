#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Function adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer
 * @str: Pointer to a string
 * Return: Address of the new element (Success) || NULL (Fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_head = malloc(sizeof(list_t));

	if (new_node_head == NULL)
	{
		return (NULL);
	}

	new_node_head->str = strdup(str);
	new_node_head->len = strlen(str);
	new_node_head->next = *head;

	*head = new_node_head;

	return (new_node_head);
}
