#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1: string 1
 *@s2: string 2
 *Return: Array
 */

char *str_concat(char *s1, char *s2)
{
char *array = NULL;
unsigned int i = 0, j = 0, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
array = malloc((i + j + 1) * sizeof(char));
if (array == NULL)
return (NULL);
for (k = 0; k < i; k++)
array[k] = s1[k];
i = k;
for (k = 0; k < j; k++)
{
array[i] = s2[k];
i++;
}
array[i] = '\0';
return (array);
}
