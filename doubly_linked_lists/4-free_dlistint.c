#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to list head.
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
