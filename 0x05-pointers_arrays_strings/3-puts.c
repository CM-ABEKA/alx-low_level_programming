#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i])
		{
			_putchar(str[i]);
		} else
		{
			_putchar("\n");
			break;
		}
	}
}
