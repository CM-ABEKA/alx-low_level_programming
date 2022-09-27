#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment
 * @s: segment
 * @accept: source of bytes
 * Return: unsigned int of the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int bytes;
	int i;
	int len;
	char *p;

	len = 0;
	while (accept[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == accept[i])
		{
			p[i] = accept[i];
		}
	}
	bytes = sizeof(*p);
	return (bytes);
}
