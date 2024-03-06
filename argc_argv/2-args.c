#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - name
*@argc: size of array
*@argv: array
*Return: Success
*/

int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", *argv++);
return (0);
}
