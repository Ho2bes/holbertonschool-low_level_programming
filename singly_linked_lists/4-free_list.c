#include "lists.h"

/**
 * free_list - Free malloc of a list
 * @head: Pointer to the start of the list
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
