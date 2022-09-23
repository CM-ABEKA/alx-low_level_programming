#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: first string
 * @s2: second string
 * Return: returns the value of their difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, ln_1 = 0, ln_2 = 0;

	while (s1[ln_1])
		ln_1++;

	while (s2[ln_2])
		ln_2++;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
		else
			j = 0;
	}

	return (j);
}
