#include <stdio.h>

/**
 * main - prints number combinations in form 00 01, 00 02...
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				l = 1;
				while (l < 10)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(' ');
					putchar(k % 10 + '0');
					putchar(l % 10 + '0');
					if (i + j + k + l != 36)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
