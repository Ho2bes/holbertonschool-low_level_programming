#include "main.h"

/**
 *print_rev a string followed by a new line
 *@str : strings
 *Return: void
 */

void _puts(char *str)
{
	int i;
	for (i = _strlen(str) -1; i >= '\0'; i--)
	{_putchar(str[i]);
	}
	_putchar('\n');
}
