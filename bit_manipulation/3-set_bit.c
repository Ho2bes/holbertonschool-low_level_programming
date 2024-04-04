#include "main.h"

/**
 * set_bit -  set value o  bit to 1 in index.
 * @n: decimal number
 * @index: bit to be return
 * Return: decimal selected
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index <= (sizeof(n) * 8) - 1)
	{
		*n |= bit;
		return (1);
	}
	return (-1);
}
