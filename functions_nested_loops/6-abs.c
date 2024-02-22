#include "main.h"

 /**
 * _abs - Compute the absolute value of an integer
 * @n: integer to be checked
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
