#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
int j;
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
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
printf("0\n");
}
return (0);
}
