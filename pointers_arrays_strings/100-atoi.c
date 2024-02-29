#include "main.h"

/**
 *_atoi - convert string to an integer
 *@s: is a pointer
 *Return: Success
 */

int _atoi(char *s)
{
	int num = 0;
	int signe = -1;

		if (*s == '-')
		{
			signe = -1;
			s++;
		}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
			}
	return (num * signe);
}
