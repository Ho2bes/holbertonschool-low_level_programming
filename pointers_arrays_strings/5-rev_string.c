#include "main.h"
#include "2-strlen.c"

/**
 *rev_string - reverse a string
 *@s: pointer
 *Return: void
 */

void rev_string(char *s)
{
	int i, c = 0;
	char temp;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = 0; i < c; c--, i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}
