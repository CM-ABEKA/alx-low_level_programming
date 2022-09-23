#include "main.h"

/**
 * cap_string - fuction capitalizes all the words in a string
 * @s: the string
 * Return: Capitalized String
 */
char *cap_string(char *a)
{
	int i, len, k = 0;
	char space[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
	len = 0;

	while (a[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			for (k = 0; k < 13; k++)
			{
				if (a[i - 1] == space[k])
				{
					a[i] -= 32;
				}
			}		
		}
	}
	return (a);
}
