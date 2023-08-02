#include "lists.h"

/**
 * add_node_end - adds new node at end of a list
 * @head: pointer to head of current list
 * @str: string to be added at the end
 * Return: NULL on fail or address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

