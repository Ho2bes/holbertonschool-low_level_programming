#include "main.h"

/**
 *_atoi - convert string to an integer
 *
 *
 *Return: Success
 */

int _atoi(char *s)
{
	int num = 0;
	int signe = -1

		if (*str == '-')
		{
			signe = -1;
			str++;
		}

	while (*str != '\0')
	{
		if (*str >= '0' && *str <='9')
		{
			num = num * 10 + (*str - '0');
		}
		else
		{
			break;
		}
		str++
			}
	return num * signe;
}
