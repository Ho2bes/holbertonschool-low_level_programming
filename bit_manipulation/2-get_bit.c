#include "main.h"

/**
 * get_bit - return  value of a bit in a index.
 * @n: decimal number.
 * @index: of bit to be return.
 * Return: selected bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(n) * 8) - 1)
		return ((n >> index) & 1);
	return (-1);
}
