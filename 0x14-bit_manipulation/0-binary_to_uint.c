#include "main.h"

/**
 * binary_to_uint - converts a binaty number to unsigned int
 * @b: string of binary chars
 * Return: converted no or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, sum = 0;
	int i, n, len;

	len = 0;
	while (b[len])
		len++;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '0')
				value = 0;
			else
				value = 1;
			for (n = len - i - 1; n >= 1; n--)
			{
				value *= 2;
			}
			sum += value;
		}
		else 
			return (0);
	}
	return (sum);
}

