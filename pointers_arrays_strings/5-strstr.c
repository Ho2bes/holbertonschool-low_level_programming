#include "main.h"
/**
**_strstr - prototype
*@haystack: the string to check
*@needle: substring to find
*Return: Success
*/

char *_strstr(char *haystack, char *needle)
{
{
int i, j;
for (i = 0; *haystack != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (*haystack == *needle)
return (haystack);
}
haystack++;
}
return ('\0');
}
}
