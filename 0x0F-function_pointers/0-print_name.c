#include <stdio.h>

/**
 * f - entry point
 * @s: string
 * Return: void
 */
void f(char *s)
{
	int i, len = 0;

	while (s[len])
		len++;
	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
}

/**
 * print_name - entry point
 * @name: the string
 * @f: function pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
