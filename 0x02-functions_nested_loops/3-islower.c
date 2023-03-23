#include "main.h"

/**
 * _islower - function to print loer case
 *
 * @c: parameter to be printed
 * Return: 1 if loer case
 * and 0 if otherise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
