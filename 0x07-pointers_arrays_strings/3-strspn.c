#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: segment
 * @accept: source of bytes
 * Return: unsigned int of the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
