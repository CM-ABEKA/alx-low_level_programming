#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: the list
 * Description: it sets the head to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
