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
	int i, j, phrase;
	char *position;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		phrase = 1;
		if (*(haystack + i) == needle[0])
		{
			position = haystack + i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (*(position + j) != *(needle + j))
				{
					phrase = 1;
					break;
				}
				else
					phrase = 0;
			}
			if (phrase == 0)
				return (haystack + i);
			break;
		}

	}
	return (NULL);
}

