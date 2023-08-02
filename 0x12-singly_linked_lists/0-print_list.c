#include "lists.h"

/**
 * print_list - prints elements of list_t
 * @h: structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h; count++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}

