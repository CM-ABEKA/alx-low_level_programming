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
	listint_t **node = head;

	if (*head == NULL)
		return;
	if (*node != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			free(temp);
			*head = (*head)->next;
		}

		*temp = NULL;
	}

}
