#include "main.h"

/**
*print_last_digit - Entry point
*@n: n is the variable
*Return: always 0 (Success)
*/

int print_last_digit(int n)
{

int last_digit = n % 10;
if (last_digit < 0)
{
_putchar(last_digit * -1);
}
return (last_digit);
}
