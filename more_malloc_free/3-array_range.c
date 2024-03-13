#include "main.h"
#include <stdlib.h>

/**
*array_range - array
*@min: variable min
*@max: variable max
*Return: Succcess
*/

int *array_range(int min, int max)
{
int i, j = 0;
int *array;
if (min > max)
return (NULL);
array = malloc(max - min + 1 * sizeof(int));
if (array == NULL)
return (NULL);
for (i = min; i <= max; i++, j++)
array[j] = max;
return (array);
free(array);
}
