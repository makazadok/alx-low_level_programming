#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i;

	/* Print every other character of the string */
	for (i = 0; *(str + i) != '\0'; i += 2)
		_putchar(*(str + i));

	/*int a new line character */
	_putchar('\n');
}
