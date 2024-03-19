#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]);
{
int num1, num2;
char *op;
int result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
*op = argv[2];
num2 = atoi(argv[3]);
if (argv[2] == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2] == '/' || argv[2] == '%') && argv[3] == 0)
{
printf("Error\n");
exit(100);
}
result = get_op_func(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);
return (0);
}
