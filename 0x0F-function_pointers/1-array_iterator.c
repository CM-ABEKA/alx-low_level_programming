#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: array
 * @size: array size
 * @action: function pointer
 * description: this function excecutes a function on each element of an array;
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array == NULL || action == NULL || size == 0)
			return;
		action(array[i]);
	}
}
