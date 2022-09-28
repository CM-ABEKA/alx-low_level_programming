#include "main.h"

/**
 * _pow_recursion - recurses the exponent of a number
 * @x: the target number
 * @y: the power
 * Return: returns the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
