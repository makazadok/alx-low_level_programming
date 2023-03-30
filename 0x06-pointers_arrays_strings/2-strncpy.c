#include "main.h"
/**
 * _strncpy - copies string
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
