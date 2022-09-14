#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 *@n: starting point
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n < 98)
		for (; n <= 98; n++)
		{
			if (n > -10 && n < 10)
			{
				if (n > 0)
				{
					_putchar(n % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				if (n < 0)
				{
					int ng = n * -1;

					_putchar('-');
					_putchar(ng % 10 + '0');
				}
			} else
			{
				if (n > 9)
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
					if (n != 98)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				if (n < -9)
				{
					int lng = n * -1;

					_putchar('-');
					_putchar(lng / 10 + '0');
					_putchar(lng % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	_putchar('\n');
}

