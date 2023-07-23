#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the result of simple arithmetic operations
 * @argc: Count
 * @argv: parameters
 * description: funciton does arithmetic on two inputs
 * Return: the called operation's result
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(get_op) == NULL || get_op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' && b == 0) || (*get_op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(get_op)(a, b));
	return (0);
}


