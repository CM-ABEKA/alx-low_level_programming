#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	if ((n - 1) > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n - 1 == 0)
		return (1);
	else
		return (-1);
}
