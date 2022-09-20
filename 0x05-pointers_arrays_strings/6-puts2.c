#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters
 * @ch: string
 * Return: void
 */
void puts2(char *ch)
{
	int i;

	for (i = 0; ; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(ch[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
