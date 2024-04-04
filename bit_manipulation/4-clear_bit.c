include "main.h"

/**
 * clear_bit - set value of bit to 0 in index
 * @n: decimal number.
 * @index: bit  return.
 * Return: new decimal selected.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index <= (sizeof(n) * 8) - 1)
	{
		*n &= ~bit;
		return (1);
	}
	return (-1);
}
