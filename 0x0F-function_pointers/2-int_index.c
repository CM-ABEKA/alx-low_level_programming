#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: the array
 * @size: the array size
 * @cmp: pointer to function cmp
 *
 * Description: this function searches for an
 * integer in an array
 * Return: first index of the first
 * element where cmp does not return 0
 * and if no element return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (((*cmp)(array[i])) > 0)
			return (i);
	}
	return (-1);
}
