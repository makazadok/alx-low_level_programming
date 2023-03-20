#include <stdio.h>
#include <unistd.h>
/**
 * main - a C program that prints a line to a standard error
 * Return: always 1 for a successful execution
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
