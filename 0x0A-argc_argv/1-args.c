#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: count
 * @argv: cli argiments array
 * Return: (0) success;
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
