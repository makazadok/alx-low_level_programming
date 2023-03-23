#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9; x++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(z + '0');
		}
	}
	_putchar('\n');
}
