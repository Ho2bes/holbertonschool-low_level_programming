#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0 (Success)
*/

void print_alphabet(void);
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
_putchar('\n');
}
return (0);
}