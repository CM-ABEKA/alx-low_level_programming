#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: The string to search.
 * @accept: The bytes to check.
 * Return: Pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
