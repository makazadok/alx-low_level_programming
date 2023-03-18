#include <stdio.h>
/**
 * main - main function of a program to print alphabets
 * Return: be 0 for successful execution
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
		return (0);
}
