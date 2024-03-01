#include "main.h"

/**
 **cap_string - upperlower to the head of word
 *@s : pointer
 *Return: Success
 */

char *cap_string(char *s)
{
int i;
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - ('a' - 'A');
}
for (i = 1; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z') && !(('a' <= s[i - 1] && s[i - 1] <= 'z') ||
('A' <= s[i - 1] && s[i - 1] <= 'Z') || ('0' <= s[i - 1] && s[i - 1] <= '9')))
{
s[i] = s[i] - ('a' - 'A');
}
else if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] = s[i] + ('a' - 'A');
}
}
return (s);
}
