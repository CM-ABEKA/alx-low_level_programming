#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
