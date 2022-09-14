#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: the number
 * Return: 0
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;
	int out;

	if (last_digit < 0)
	{
		out = last_digit * -1;

		_putchar(out % 10 + '0');
		return (out);
	}
	_putchar(last_digit % 10 + '0');
	return (last_digit);
}
