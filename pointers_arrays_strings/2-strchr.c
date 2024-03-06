#include "main.h"

/**
**_strchr - locates a character in a string
*@s : the string to check
*@c : the character
*Return: a pointer to the first occurance of the character
*/

char *_strchr(char *s, char c)

{
unsigned int i = 0;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
return (&s[i]);
if (s[i] == c)
return (&s[i]);
else
return (0);
}
