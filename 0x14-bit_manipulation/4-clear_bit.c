#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: the number
 * @index: the position
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 68)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
