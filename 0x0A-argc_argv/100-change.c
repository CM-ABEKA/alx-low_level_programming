#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: count
 * @argv: cli argiments array
 * Return: (0) success;
 */
int coins(int amount);
int main(int argc, char *argv[])
{
	__attribute__ ((unused)) int x = atoi(argv[1]);
	
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	if (argc < 0)
		return (0);
	printf("%d\n", coins(atoi(argv[1])));
	return (0);
}

/**
 * coins - get coins for change
 * @amount: amount of money
 * Return: change
 */
int coins(int amount)
{
	int e = 1, f = 2, g = 5, h = 10, i = 25;
	int bal = 0;

	while (amount > 0)
	{
		while (amount >= i)
		{
			amount -= i;
			bal++;
		}
		while (amount >= h)
		{
			amount -= h;
			bal++;
		}
		while (amount >= g)
		{
			amount -= g;
			bal++;
		}
		while (amount >= f)
		{
			amount -= f;
			bal++;
		}
		while (amount >= e)
		{
			amount -= f;
			bal++;
		}
	}
	return (bal);
}
