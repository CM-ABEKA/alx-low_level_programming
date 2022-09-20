#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i, j;
	char temp;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[j - 1];
		s[j - 1] = temp;
	}
}
