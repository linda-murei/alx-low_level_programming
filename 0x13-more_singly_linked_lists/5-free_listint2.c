#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head:head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
	free(*head);
	*head = NULL;
}
