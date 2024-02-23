#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int x, y, z;

    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            z = y * x;

            if (y != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (z < 10)
                    _putchar(' ');
            }

            if (z < 10)
                _putchar(z + '0');
            else
            {
                _putchar((z / 10) + '0');
                _putchar((z % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
