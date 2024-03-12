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
char *array;
if (size == 0 || nmemb == 0)
return (NULL);
array = malloc(size * nmemb);
if (array == NULL)
return (NULL);
i = 0;
for (i = 0; i < nmemb; i++)
*(array + (i * size)) = 0;
return (array);
free(array);
}
