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

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
