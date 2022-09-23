#include "main.h"

/**
 * string_touper - changes all lowercase to uppercase
 * @s: string
 * Return: string in caps
 */
char *string_toupper(char *s)
{
	int diff, low = 97, upp = 65, i, len;

	len = 0;
	while (s[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= low && s[i] <= 122)
		{
			diff = s[i] - low;
			s[i] = upp + diff;
		}
	}
	return (s);
}

