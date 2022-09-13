#include <stdio.h>

/**
* main - print aphabet except q and e
*
* Return: 0 (Success)
*/
int main(void)
{
	char  ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 101)
		{
			if (ch != 113)
			{
				putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}

