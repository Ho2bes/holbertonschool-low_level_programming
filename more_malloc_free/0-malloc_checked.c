#include "main.h"
#include <stdlib.h>

/**
**malloc_checked - checked
*@b: variable
*@p: array
*Return: Success
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);
return(p);
}
