#include "lists.h"
/**
 * sum_listint - sum of all data in a listint_t linked list.
 * @head: of the list
 *
 * Return: sum of integers
 */
int sum_listint(listint_t *head)
{
	int i;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	i = 0, tmp = head;
	while (tmp != NULL)
	{
		i += tmp->n;
		tmp = tmp->next;
	}

	return (i);
}
