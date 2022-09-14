#include "main.h"

/**
 * jack_bauer - ptints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar(0 % 10 + '0');
				_putchar(hr % 10 + '0');
			}
			_putchar(hr % 10 + '0');
			_putchar(':');
			if (min < 10)
			{
				_putchar(0 % 10 + '0');
				_putchar(min % 10 + '0');
			}
			_putchar(min % 10 + '0');
		}
	}
}
