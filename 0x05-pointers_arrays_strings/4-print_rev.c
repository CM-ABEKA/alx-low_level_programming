#include "main.h"
#include <string.h>

/**
 * print_rev - prints strings in reverse
 * @ch: string
 * Return: void
 */

void print_rev(char *ch)
{
	int len = strlen(ch);
	
	while (len--)
		putchar(*(s + len));
	putchar('\0');
}
