#include "main.h"

/**
 *_puts-print a string followed by a new line
 *@str : strings
 *Return: void
 */

void _puts(char *str)
{

while (*str != '\0')
	{
_putchar(*str);
str++;
}
_putchar('\n');
}
