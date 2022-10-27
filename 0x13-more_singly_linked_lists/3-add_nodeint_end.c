#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: head of list
 * @n: int to be added at the end
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *last;

	first = *head;
	last = malloc(sizeof(listint_t));
	if (last)
	{
		last->n = n;
		last->next = NULL;
	}
	else
		return (NULL);
	if (first)
	{
		while (first->next)
		{
			first = first->next;
		}
		first->next = last;
	}
	else
		*head = last;

	return (last);
}
