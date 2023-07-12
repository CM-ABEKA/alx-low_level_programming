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
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	
	while (str[e])
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] == str[i]) != '\0')
		i++;

	return (p);
}
