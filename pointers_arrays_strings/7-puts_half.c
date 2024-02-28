#include "main.h"

/**
 *puts_half - print the half of the string
 *@str : pointers
 *Return : half string
 */

void puts_half(char *str)
{
int i;
for (i = '\0' / 2 - 1; str[i] != '\0'; i++)
_putchar(str[i]);
}
