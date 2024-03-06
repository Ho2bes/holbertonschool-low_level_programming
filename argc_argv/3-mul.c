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
if (argc >= 3)
{
int i = atoi(argv[1]);
int j = atoi(argv[2]);
int resultat = i * j;
printf("%d\n", resultat);
}
else
{
printf("Error\n");
}
return (0);
}
