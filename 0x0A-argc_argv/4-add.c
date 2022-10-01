#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: count
 * @argv: cli argiments array
 * Return: (0) success;
 */
int main(int argc, char *argv[])
{
	int mul, i;

	mul = 0;
	if (argc < 1)
	{
		printf("%i", mul);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		mul += atoi(argv[i]);
	}
	printf("%i\n", mul);

	return (0);
}
