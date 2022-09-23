#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: integer array
 * @n: number of elements in the array
 * Retrun: none
 */
void reverse_array(int *a, int n)
{
	int i, ln, buffer;

	ln = 0;

	while (a[ln])
	{
		ln++;
	}
	for ( i = 0; i < n; i++)
	{
		buffer = a[i];
		a[i] = a[ln - 1];
		a[ln - 1] = buffer;
		ln--;
	}
}

