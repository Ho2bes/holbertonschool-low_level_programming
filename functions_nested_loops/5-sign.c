#include "main.h"

    /**
    *print_sign - Entry point
    *
    *Return: always 0 (Success)
    */

int print_sign(int n)
{
if (n > 0)
	_purchar("+");
return (1);
else if (n = 0)
	_purchar("0");
return (0);
else
	_purchar("-");
return (-1);
}
