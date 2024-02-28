#include "main.h"

/**
 *puts_half - print the half of the string
 *@str : pointers
 *Return : half string
 */

void puts_half(char *str)
{

	int n, m, len;

	len = 0;

	for (n = 0; str[n] != '\0'; n++)
		len++;

	m = (len / 2);

	if ((len % 2) == 1)
		m = ((len + 1) / 2);

	for (n = m; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
