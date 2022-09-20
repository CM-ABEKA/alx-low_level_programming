#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i, j;
	int mid;

	for (i = 0; ; i++)
	{
		if (str[i])
			len++;
	}

	mid = (len / 2);
	if ((len % 2) == 1)
		mid = (len + 1) / 2;
	for (j = mid; str[j] != '\0'; j++)
	{
		
		_putchar(str[j]);
	}
	_putchar('\n');
}


