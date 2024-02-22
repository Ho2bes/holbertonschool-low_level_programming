#include "main.h"

 /**
 *_abs - Compute the absolute value of an integer
 *@int: integer to be checked
 *Return: The absolute value
 */
int _abs(int n)
{

	if (n >= 0)
		return (n);
	else
	{
		n = (n * -1);
		return (n);
	}
}
