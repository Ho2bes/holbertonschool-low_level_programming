#include "lists.h"

/**
  * sum_dlistint - Sum of all data in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The sum of all data
  */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
