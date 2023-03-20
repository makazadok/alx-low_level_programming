#include <stdio.h>

/**
 * main - a program that prints the size of various types on the computer
 * Return: always 0 for success execution
 */
int main(void)
{
	printf("The size of a char: %d bytes", sizeof(char));
	printf("The size of an int: %d bytes", sizeof(int));
	printf("The size of a long: %d bytes", sizeof(long));
	printf("The size of a long long: %d bytes", sizeof(long long));
	printf("The size of a float: %d bytes", sizeof(float));
	printf('\n')
	return (0);
}
