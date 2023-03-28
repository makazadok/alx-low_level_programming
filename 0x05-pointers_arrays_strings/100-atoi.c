#include "main.h"
#include <stdio.h>
/**
 * _atoi - to convert a string to integer
 * @s: parameter to be converted
 * Return: 0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	else
	{
		i++;
	}
	return (sign * result);
}
