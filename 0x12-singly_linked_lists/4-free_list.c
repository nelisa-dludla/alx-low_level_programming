#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Function frees a list_t list
 * @head: Pointer to head of the list
 */

void free_list(list_t *head)
{
	list_t *item_on_list = head;

	while (item_on_list != NULL)
	{
		list_t *next = item_on_list->next;

		free(item_on_list->str);
		free(item_on_list);

		item_on_list = next;
	}
}
