#include "main.h"

/**
*print_line - Compute the absolute value of an integer
*@n : - variable
* Return: The absolute value
*/

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
