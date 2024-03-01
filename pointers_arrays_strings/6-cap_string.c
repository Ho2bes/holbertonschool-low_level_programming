#include "main.h"

/**
 **cap_string - upperlower to the head of word
 *@s : pointer
 *Return: Success
 */

char *cap_string(char *s)
{
int i;
int start = 1;

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if (start)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
start = 0;
}
else
{
if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] = s[i] + ('a' - 'A');
}
}
}
else
{
start = 1;
}
}
return (s);
}
