#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number
 * Return: succes(sqrt) fail(-1)
 */
int root(int n, int i);
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (root(n, (n + 1) / 2));
}

/**
 * sqrt - checks the sqrt
 * @n: the number
 * @i: counter
 * Return: the root if exists
 */
int root(int n, int i)
{
	if (i < 1)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (root(n, i - 1));
}
