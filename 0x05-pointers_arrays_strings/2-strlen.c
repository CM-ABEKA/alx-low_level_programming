#include "main.h"

/**
 * _strlen - returns the lentgh of a string
 * @s: string
 * Return: 0 success
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; ;i++)
	{
		if (s[i])
		{
			len++;
		}
		else if (!s[i])
		{
			break;
		}
	}
	return (len);
}
