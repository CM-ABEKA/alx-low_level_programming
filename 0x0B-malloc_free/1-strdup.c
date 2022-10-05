#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space
 * @str: the string in storage
 * Return: a character
 */
char *_strdup(char *str)
{
	char *p;
	int i, e;

	if (str == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
	{
	}
	e += 1;
	p = malloc(sizeof(char) * e);

	for (i = 0; str[i]; i++)
		p[i] = str[i];
	if (p == NULL)
		return (NULL);
	p[e] = '\0';
	return (p);
}
