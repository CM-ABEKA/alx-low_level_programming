#include <stdio.h>

/**
 * main - prints letters of the aphabet
 *
 * Description: using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
