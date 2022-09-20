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
	int all;

	for (all = 0, all < n; all++)
	{
		if ( all != n - 1)
			printf("%d", a[all]);
		else
			printf("%d", a[all]);
	}
	putchar(10);
}
