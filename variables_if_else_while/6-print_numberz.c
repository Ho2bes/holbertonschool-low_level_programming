#include <stdio.h>

/**
*main - Entry point
*
*Return: always 0 (Success)
*/

int main(void)
{
int numero;
for (numero = 0; numero < 10; numero++)
putchar((numero % 10) + '0');
putchar('\n');
return (0);
}
