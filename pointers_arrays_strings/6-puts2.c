#include "main.h"

/**
 *puts2 - prints every other character
 *
 *
 */

void puts2(char *str)
{
int i = 0
while (*str != '\0')
	{
_putchar(*str);
str++;
}

if (i != '\0')
	_putchar(i + 2);
_putchar('\n');
}
