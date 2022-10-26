#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *new;
	if (!head)
		return;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
