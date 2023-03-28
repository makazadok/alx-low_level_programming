#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i, len = 0;

	/* Find the length of the string */
	while (*(s + len) != '\0')
		len++;

	/* Print the characters of the string in reverse order */
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	/* Print a new line character */
	_putchar('\n');
}
