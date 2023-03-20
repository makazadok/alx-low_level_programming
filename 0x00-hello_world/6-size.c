#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: always 0 for success execution
 */
int main(void)
{
	printf("The size of char: %d bytes", sizeof(char));
	printf("The size of int: %d bytes", sizeof(int));
	printf("The size of long: %d bytes", sizeof(long));
	printf("The size of long long: %d bytes", sizeof(long long));
	printf("The size of float: %d bytes", sizeof(float));
	return (0);
}
