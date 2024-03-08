#include "main.h"

/**
 * find_prime - prime number.
 * @n: number 1
 * @i: number 2
 * Return: Success
 */
int find_prime(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0)
return (0);
else
return (find_prime(n, i + 1));
}
/**
 * is_prime_number - calculates prime number.
 * @n: number 1.
 *
 * Return: prime number.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (find_prime(n, 2));
}
