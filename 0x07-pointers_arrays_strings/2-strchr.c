#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locate Function
 * Description: This character locates the first occurence
 * of a character in a string.
 * @s: Pointer to the string.
 * @c: The character.
 * Return: Pointer to the first occurence of the characer.
 * or NULL if no occurence.
 */
char *_strchr(char *s, char c)
{
	unsigned long int i;
	char *p;

	for (i = 0; i < sizeof(s); i++)
	{
		p = s + i;
		if (*p == c)
			return (p);
	}
	return (NULL);
}
