#include "main.h"

/**
 *puts_half - print the half of the string
 *@str : pointers
 *Return : half string
 */

void puts_half(char *str)
{
int i;
int j;
for (i = 0 ; str[i] != '\0'; i++)
j = i / 2 + 1;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
