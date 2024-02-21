#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0 (Success)
*/

int main(void)
{
int numero;
char ch;
for (numero = '0'; numero <= '9'; numero++)
putchar(numero);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
