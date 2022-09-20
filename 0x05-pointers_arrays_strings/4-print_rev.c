#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @ch: string
 * Return: void
 */

int _strln(char *ch);
void print_rev(char *ch)
{
	int i;
	int len = _strln(ch)-1;
	char temp;

	for (i = 0; i < len/2 ; i++)
	{
		temp = ch[i];
		if (ch[len - i - 1])
		{
			ch[i] = ch[len - i - 1];
		}
		ch[len - i - 1] = temp;
		ch[len] = '\0';
	}
}
int _strln(char *ch)
{
	int i;
	int len;
	
	len = 0;

	for (i = 0; ; i++)
	{
		len++;
		if (!ch[i])
		{
			break;
		}
	}
	return len;
}
