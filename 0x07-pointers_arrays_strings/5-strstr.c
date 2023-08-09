#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to check.
 * @needle: The substring.
 * Return: Address of start point of needle.
 * If not found return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
				break;
			b++;
		}
		if (needle[b] == '\0')
			return (haystack + a);
		a++;
	}
	return (NULL);
}
