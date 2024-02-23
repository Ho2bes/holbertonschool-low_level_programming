#include "main.h"

    /**
    *print_alphabet - Entry point
    *
    *Return: always 0 (Success)
    */

void times_table(void)

{
	
		int x;
		int y;
		int z;
		{
	for (x = 0; x < 10; x++)
		for (y = 0; y < 10; y++)
		       
		z = x * y;
			if (x == 0)
			{
				_putchar( z + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
	if (z < 9 && x != 0 )
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}

	else if (z >= 9)
	{
		_putchar(',');
			_putchar(' ');
			_putchar(' ');
	}
	}
	_putchar('\n');
}
