#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: the string
 * Return: char encoded
 */
char *leet(char *s)
{
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};
	int i = 0, k, len = 5;

	for (k = 0; s[k] != '\0'; k++)
	{
		i = 0;
		for ( ; i < len; i++)
		{
			if (s[k] == a[i] || s[k] - 32 == a[i])
			{
				s[k] = b[i];
			}
		}
	}
	return (s);
}
