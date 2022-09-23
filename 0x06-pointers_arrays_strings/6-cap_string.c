#include "main.h"

/**
 * cap_string - fuction capitalizes all the words in a string
 * @s: the string
 * Return: Capitalized String
 */
char *cap_string(char *a)
{
	int i, len;

	len = 0;
	while (a[len])
		len++;

	for (i = 0; i < len; i++)
	{
		
		if (a[i] >= 100 && a[i] <= 122)
		{
			if ((a[i - 1] < 97 && a[i - 1] > 90) || (a[i - 1] > 122))
			{
				a[i] -= 32;
			}
			if (a[i - 1] < 65)
				a[i] -= 32;
		}
	}

	return (a);
}
