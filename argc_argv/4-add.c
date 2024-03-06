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
int i, sum = 0;
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
if (argc > 1)
{
printf("%d\n", sum);
}
else if (argc == 1)
{
printf("%d\n", argc);
}
else
{
printf("Error\n");
}
return 0;
}
