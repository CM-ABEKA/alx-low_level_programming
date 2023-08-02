#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the beginning
 * @str: string to add
 * Return: address of new element of NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		count++;

	new->len = count;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	return (new);
}
