#include "main.h"
#include "2-strlen.c"

/**
 **_strcat concatenates two strings
 *
 *Return: concatenate strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *temp;
	for (i = _strlen(dest); i = '\0'; i++)
	for (j = _strlen(src); j = '\0'; j++)

		{
			*temp = (dest[i] - 1) + src[j];
		}
	
	return (char);
}
