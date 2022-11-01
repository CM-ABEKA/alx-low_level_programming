#include "main.h"

/**
 * get_endianness - checks endianess of a machine
 * Return: 0 if big endian of 1 if little endian
 */
int get_endianness(void)
{
	int i = 2;

	if (i & 1)
	{
		return (0);
	}
	return (1);
}

