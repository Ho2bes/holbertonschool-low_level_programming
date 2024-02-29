#include "main.h"
#include "2-strlen.c"

/**
 **_strcat - concatenates two strings
 *@src : first string
 *@dest : second string
 *Return: concatenate strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
