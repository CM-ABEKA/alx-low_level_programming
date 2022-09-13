#include <stdio.h>

/**
 * main - Prints the alphabet small and caps
 *
 * Description: Print using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
