#include "lists.h"

/**
  * get_dnodeint_at_index - Gets  node from doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: current_node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}
	return (current_node);
}
