#include "main.h"
#include <stdlib.h>

/**
 **_calloc - calloc
 *@nmemb: array
 *@size: variable
 *Return: Success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *array = malloc(size * nmemb);
if (size == 0 || nmemb == 0)
return (NULL);
for (i = 0; i < size; i++)
array[i] = nmemb;
return (array);
free (array);
}
