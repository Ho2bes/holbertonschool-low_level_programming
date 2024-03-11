#include "main.h"
#include <stdlib.h>

/**
 **create_array - create an array
 *@size: size allowed
 *@c : characters
 *Return: Array
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *array = malloc(size * sizeof(char));

    if (size == 0 || array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        array[i] = c;
    return (array);
}
