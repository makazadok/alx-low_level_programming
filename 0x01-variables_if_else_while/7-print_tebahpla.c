#include <stdio.h>

/**
 * main - main function to print alphabet in reverse
 * Return: be 0 for successful execution
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
