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

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%i\n", mul);

	return (0);
}
