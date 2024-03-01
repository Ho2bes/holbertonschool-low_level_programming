#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1 : string 1
 *@s2 : string 2
 *Return: result
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (*s1 - *s2);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	else
		return (*s1 - *s2);
}
