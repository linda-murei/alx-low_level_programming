#include "lists.h"
/**
* reverse_listint- reverses a linked list
* @head: pointer to the first node in the list
* Return:pointer to the first node of the
* reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *advent, *exit;

	advent = NULL;
	while (*head != NULL)
	{
		exit = (*head)->next;
		(*head)->next = advent;
		advent = *head;
		*head = exit;
	}
	*head = advent;

	return (*head);
}
