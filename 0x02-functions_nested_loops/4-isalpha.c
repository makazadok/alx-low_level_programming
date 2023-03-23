#include "main.h"

/**
 * _isalpha - function that checka for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if alphabets
 * and 0 if otherise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
