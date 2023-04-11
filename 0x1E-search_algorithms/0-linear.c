#include "search_algos.h"

/**
 * linear_search - engtry point
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to search
 * description: searches for integer in array of
 * integers
 * Return: index of value in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, value);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i == size - 1)
			return (-1);
	}
	return (EXIT_SUCCESS);
}
