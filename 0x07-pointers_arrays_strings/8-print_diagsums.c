#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix.
 * @a: the matrix.
 * @size:size of the matrix.
 * Return: NULL.
 */
void print_diagsums(int *a, int size)
{
	int x, y, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x * size + x];
	}
	for (y = size - 1; y >= 0; y--)
	{
		s2 += a[y * size + (size - 1 - y)];
	}
	printf("%d, %d\n", s1, s2);
}
