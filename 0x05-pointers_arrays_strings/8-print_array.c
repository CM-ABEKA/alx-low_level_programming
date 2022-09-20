#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of an array with commas
 * @a: array
 * @n: total elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	putchar('\n');
}
