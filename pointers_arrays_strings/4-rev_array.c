#include "main.h"
/**
 *reverse_array - reverse a array
 *@a: pointer
 *@n: variable
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n -1];
		a[n -1] = temp;
		n--;
	}
}
