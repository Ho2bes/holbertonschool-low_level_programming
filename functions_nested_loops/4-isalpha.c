#include "main.h"

/**
*int _isalpha - Entry point
*@c : - whaaaat
*Return: always 0 (Success)
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
