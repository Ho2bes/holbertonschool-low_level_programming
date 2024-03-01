#include "main.h"

/**
 **_strncpy - copy two strings
 *@n : variable
 *@dest : string of destination
 *@src : string to copy
 *Return: Success
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
dest[i] = src[i];
i++;
while (i < n)
dest[i] = '\0';
i++;
return (dest);
}
