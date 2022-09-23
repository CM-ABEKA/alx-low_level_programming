#include "main.h"

/**
 * cap_string - fuction capitalizes all the words in a string
 * @a: the string
 * Return: Capitalized String
 */
char *cap_string(char *a)
{
	int i, len, k = 0;
	char space[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

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
