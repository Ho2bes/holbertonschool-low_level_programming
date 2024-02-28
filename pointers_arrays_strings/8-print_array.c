#include "main.h"
#include <stdio.h>

/**
*print_arrray - print array 
*@n : is the number of elemet of the array
*@a : is the pointer
*Return: success
*/

void print_array(int *a, int n)

{
int i;
for (i = 0; i < n ; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
