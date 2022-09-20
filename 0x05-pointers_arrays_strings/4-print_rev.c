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
	char temp;

	for (i = 0; ch[i] != '\0'; i++)
	{
		len ++;
	}

	for (n = 0; n < len/2 ; i++)
	{
		temp = ch[i];
		if (ch[len - i])
		{
			ch[i] = ch[len -i];
		}
		ch[len - i] = temp;
		ch[len + 1] = '\0';
	}
}
