#include "main.h"
#include <string.h>

/**
 * print_rev - prints strings in reverse
 * @ch: string
 * Return: void
 */

void print_rev(char *ch)
{
	int len = 0;
	int i, n;

	for (i = 0; ch[i] != '\0'; i++)
	{
		len ++;
	}

	for (i = (len - 1); n >= 0; n--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
