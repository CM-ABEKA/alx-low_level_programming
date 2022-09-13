#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the second project comparing n to 6
 *
 * Description: this prints a string depending on the value.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last < 6)
	{
		if (last == 0)
		{
			printf("Last digit of %i is %i and is 0", n, last);
		} else
		{
			printf("Last digit of %i is %i and is less than 6 and not zero", n, last);
		}
	} else if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, last);
	}
	return (0);

}
