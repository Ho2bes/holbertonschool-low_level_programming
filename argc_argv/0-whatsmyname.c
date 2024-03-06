#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - name
*@argc: size of array
*@argv: array
*Return: Success
*/

int main(int argc, char **argv)
{
if (argc > 0)
printf("%s\n", *argv);
return (0);
}
