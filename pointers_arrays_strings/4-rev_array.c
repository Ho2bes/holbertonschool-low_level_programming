#include "main.h"
/**
 *reverse_array - reverse a array
 *@a: pointer
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c = n -1;
	char temp;

	for (i = 0; i < c; c--, i++)
	{
		temp = a[i];
		a[i] = a[c];
		a[c] = temp;
	}
}
