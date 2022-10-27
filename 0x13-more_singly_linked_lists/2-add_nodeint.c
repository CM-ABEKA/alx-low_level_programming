#include "lists.h"

/**
 * add_nodeint - adds noe at the beginning of a list
 * @head: current node
 * @n: int to add
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *new;

  if (head == NULL)
	  return (NULL);

  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->next = *head;

  *head = new;

  return (new);
}

