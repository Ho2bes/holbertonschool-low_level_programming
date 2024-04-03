#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (!(b[i] == '1' || b[i] == '0'))
			return (0);
		count = count *  2 + (b[i] - '0');
		i++;
	}
	return (count);
}
