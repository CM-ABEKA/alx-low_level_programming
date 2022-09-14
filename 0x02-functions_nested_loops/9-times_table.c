#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int row;
	int col;
	int mul;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mul = row * col;
			if (mul > 9)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul % 10 + '0');
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
