#include "main.h"

/**
 * flip_bits - set  value of  bit to 0 in  inde.
 * @n: origin decimal number
 * @m: destiny decimal number
 * Return: number bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int new = n ^ m;

	while (new)
	{
		bit_count += p & 1;
		new >>= 1;
	}
	return (bit_count);
}
