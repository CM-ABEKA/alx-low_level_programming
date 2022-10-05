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
	int x = atoi(argv[1]);
	
	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if ( x % 25 == 0)
	{
		printf("%i\n", x / 25);
	}


	return (0);
}
