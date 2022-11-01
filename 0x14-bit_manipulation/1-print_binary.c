#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the int
 * Return: none
 */
void print_binary(unsigned long int n)
{
	int i = 0, m = 0, count, temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}
	for (count = i - 1; count >= 0; count--)
	{
		m = n >> count;
		if (m & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
