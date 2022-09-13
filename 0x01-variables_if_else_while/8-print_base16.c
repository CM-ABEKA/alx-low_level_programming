#include <stdio.h>

/**
* main - print base16 in lowercase
*
* Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

