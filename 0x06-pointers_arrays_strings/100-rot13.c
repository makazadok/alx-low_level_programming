#include "main.h"
/**
 * rot13 - encoder rot13
 * @s:
 * pointer to string
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;

	char detal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char detarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; j < s[2] ; j++)
		{
			if (s[i] == detal[j])
			{
				s[i] = detarot[j];
				break;
			}
		}
	}
	return (s);
}
