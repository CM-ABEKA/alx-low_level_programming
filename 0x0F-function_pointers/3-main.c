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
	int a, b, sol;
	char *get_op;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	sol = res(a, b);

	printf("%d\n", sol);
	return (0);
}


