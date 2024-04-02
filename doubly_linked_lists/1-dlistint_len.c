#include "lists.h"

/**
 * dlistint_len - number of elements in a list.
 * @h: double linked list.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *tmp_node = h;

	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		count++;
	}
	return (count);
}
