#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters
 * @ch: string
 * Return: void
 */
void puts2(char *ch)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if(i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
