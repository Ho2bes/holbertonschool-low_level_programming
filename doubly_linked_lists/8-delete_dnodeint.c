#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node in list
 * @head: head of address
 * @index: index to delete
 * Return: success or fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	dlistint_t *node_to_delete;
	unsigned int i;
	
	if (*head == NULL)
		return (-1);
	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}
	for (i = 0; current_node != NULL && i < index - 1; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	dlistint_t *node_to_delete = current_node->next;

	current_node->next = node_to_delete->next;

	if (node_to_delete->next != NULL)
		node_to_delete->next->prev = current_node;
	free(node_to_delete);
	return (1);
}
