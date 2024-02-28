#include "main.h"

/**
 *puts_half - print the half of the string
 *@str : pointers
 *Return : half string
 */

void puts_half(char *str)
{
	int i;
	char t;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
}
