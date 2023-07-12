#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - returns pointer to an array of words
 * @str: elements
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	int wc = 1, i, k = 0, l = 0, c = 0, start = 0, end;
	char **p, *tmp;

	while(str[k])
	{
		if (str[k] == ' ')
			wc++;
		k++;
	}

	while(*(str + l))
		l++;

	if (wc == 0)
		return (NULL);

	p = (char **) malloc(sizeof(char *) * (wc + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				p[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
		if (i == l)
		{
			end = i;
			tmp = (char *) malloc(sizeof(char) * (c + 1));
			if (tmp == NULL)
				return (NULL);

			*tmp = '\0';
			p[k] = tmp - c;
			k++;
		}
	}
	p[k] = NULL;
	return (p);
}

