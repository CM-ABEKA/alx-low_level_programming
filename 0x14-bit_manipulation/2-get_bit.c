#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index: starts from 0
 * @n: the number
 * Return: value of bit or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index >= (sizeof(n) * 8))
		return (-1);

	bit = (n >> index) & 1;
	if (bit == 0)
		return (0);
	return (1);
}
