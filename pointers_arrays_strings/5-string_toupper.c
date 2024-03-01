#include "main.h"

/**
 **string_toupper - changes all lowercase
 *@i : variable
 *@c : variable
 *@s : pointer
 *Return: string in lowercase
 */

char *string_toupper(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
	    s[i] = s[i] -32;
  }
  return (s);
}
