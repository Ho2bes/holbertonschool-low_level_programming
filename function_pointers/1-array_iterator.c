#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute a function over array elements.
 * @array: array to iterate.
 * @size: array size.
 * @action: function to execute.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
