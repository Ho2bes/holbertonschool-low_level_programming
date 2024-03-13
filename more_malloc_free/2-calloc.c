#include "main.h"
#include <stdlib.h>

/**
*_calloc - calloc
*@nmemb: array
*@size: variable
*Return: Success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(array + (i * size)) = 0;
	return (array);
}
