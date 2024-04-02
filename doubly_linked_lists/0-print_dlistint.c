#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: The double linked list to prints
 *
 * Return: The number of nodes of the double linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *tmp_node = h;

	while (tmp_node != NULL)
	{
		printf("%d\n", tmp_node->n);
		tmp_node = tmp_node->next;
		count++;
	}
	return (count);
}
