#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
*
*Return: Always 0 (Sucess)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{ printf("%d, is positive\n", n) };
else if(n == 0)
{ printf("%d, is zero\n", n) };
else
  { ("%d, is negative\n", n) };
Return (0);
}