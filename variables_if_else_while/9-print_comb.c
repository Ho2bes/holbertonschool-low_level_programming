#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0 (Success)
*/

int main(void)
{
char numero;
for (numero = '0'; numero <= '9'; numero++)
putchar(numero ', ');
putchar('\n');
return (0);
}
