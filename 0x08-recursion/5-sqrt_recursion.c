#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number
 * @i: the counter
 * Return: succes(sqrt) fail(-1)
 */
int root(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}

/**
 * root - checks the sqrt
 * @n: the number
 * @i: counter
 * Return: the root if exists
 */
int root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root(n, i + 1));
}
