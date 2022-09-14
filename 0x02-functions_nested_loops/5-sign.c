#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: single integer input
 * Return: 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0 % 10 + '0');
		return (0);
	}
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	_putchar(45);
	return (-1);
}
