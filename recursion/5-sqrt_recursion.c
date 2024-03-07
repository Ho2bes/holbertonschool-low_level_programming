#include "main.h"

/**
 * function_recursive - racine carre.
 * @n: number 1
 * @i: number 2
 * Return: Success
 */
int function_recursive(int n, int i)
{
if (i * i == n)
return (i);
if (i * i <= n)
return (function_recursive(n, i + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: number 1.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (function_recursive(n, 2));
}
