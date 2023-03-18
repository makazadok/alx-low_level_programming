#include <stdio.h>

/**
 * main - main function to print comb of numbers
 * Return: be 0 for successful execution
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (1 == 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
