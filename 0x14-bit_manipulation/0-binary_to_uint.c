#include "main.h"

/**
 * binary_to_uint - converts a binaty number to unsigned int
 * @b: string of binary chars
 * Return: converted no or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = (sum << 1) | (*b - '0');
		b++;
	}

	return (sum);
}

