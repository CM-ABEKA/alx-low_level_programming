#include "main.h"

/**
 * _memset - fills the first n bytes with constant byte b
 * @s: pointer
 * @b: constant byte
 * @n: bytes of mem area to be filled
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p;

	p = s;
	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (p);
}
