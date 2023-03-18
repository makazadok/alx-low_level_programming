#include <stdio.h>

/**
 * main - main function of a program to print the alphabet with putchar
 * Return: be 0 for successful execution
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
		return (0);
}
