#include "main.h"

/**
*more_numbers - Compute the absolute value of an integer
*
* Return: The absolute value
*/

void more_numbers(void)
{
int x;
int a;

for (a = 0; a < 10; a++)
{
for (x = 0; x < 15; x++)
{
if (x > 9)
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
_putchar('\n');
}
}
