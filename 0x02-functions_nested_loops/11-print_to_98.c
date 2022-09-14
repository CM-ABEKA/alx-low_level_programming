#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n: number input
 * Return: Always 0 (Success)
 */
void printn(int x);

void print_to_98(int n)
{
	if (n == 98)
	{
		printn(n);
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printn(n)
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printn(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}


}
void printn(int x)
{
	if (x / 10 != 0)
	{
		printn(x / 10);
		if (x > 0)
		{
			_putchar(x % 10 + '0');
		}
		else
		{
			_putchar(-x % 10 + '0');
		}
	}
	else if ((x / 10 == 0) && (x % 10 != 0) && ( x > 0))
	{
		_putchar(x % 10 + '0');
	}
	else if ((x / 10 == 0) && (x % 10 != 0) && (x <= 0))
	{
		putchar('-');
		_putchar(-x % 10 + '0');
	}
}
