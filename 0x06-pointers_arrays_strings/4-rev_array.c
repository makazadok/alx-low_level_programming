#include "main.h"
/**
 * reverse_array - reverses element of a function
 * @a: function parameter
 * @n: function parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; 1 < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
