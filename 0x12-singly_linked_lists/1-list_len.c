#include "lists.h"

/**
 * list_len - prints the returns the length of a linked list
 * @h: pointer to the list
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
