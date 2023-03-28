#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, inc the null byte
 * @dest: The buffer to which the string is to be copied.
 * @src: The string to be copied.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = '\0';
	return (dest);
}
