#include "main.h"

/**
 * flip_bits - returns number of bits needed
 * to get one number to another
 * @n: the number
 * @m: the second number to compare
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, count = 0;

	while (flip > 0)
	{
		if (flip & 1)
		{
			count++;
		}
		flip >>= 1;
	}
	return (count);
}
