#include "main.h"

/**
 * set_bit - sets value of a bit to 1 for a given index
 * @n: pointer to number
 * @idex: position
 * Return: 1 if success and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
