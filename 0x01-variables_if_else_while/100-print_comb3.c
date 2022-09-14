#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = c; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');
				if ((a + b) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
