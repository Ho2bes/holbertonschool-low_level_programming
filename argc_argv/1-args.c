#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check .
* @argc: The size of the argv array.
* @argv: An array
* Return: Always argc.
*/

int main(int argc, char **argv)
{
if (*argv[0] > 0)
printf("%i\n", argc - 1);
return (0);
}
