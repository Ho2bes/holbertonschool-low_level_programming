#include <stdarg.h>
/**
 * sum_them_all - sums all arguments.
 * @n: number of elements.
 * Return: 0 for n == 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ad;
va_start(ad, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(ad, int);
va_end(ad);
return (sum);
}
