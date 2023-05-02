#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of linked list
 * @head: pointer to first element
 * @index:index of node to delete
 * Return: 1 if success -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *num = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(num);
		return (1);
	}
	while (k < index - 1)
	{
		if (!num || !(num->next))
			return (-1);
		num = num->next;
		k++;
	}
	current = num->next;
	num->next = current->next;
	free(current);
	return (1);
}
