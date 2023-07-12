#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argtostr - concactenates program arguments
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: string with all arguments
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}

	return (p);
}

