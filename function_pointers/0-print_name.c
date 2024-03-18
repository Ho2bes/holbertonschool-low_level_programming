#include <stdlib.h>
#include "main.h"

/**
 * print_name - prints a name.
 * @name: name to print.
 * @f: function to print name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
