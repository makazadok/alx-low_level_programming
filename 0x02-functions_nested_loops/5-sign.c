#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that print signs
 *
 * @n: parameter to be printed
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (0);
	}
}
