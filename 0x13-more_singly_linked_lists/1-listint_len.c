#include "lists.h"

/**
 * listint_len -returns the number of elements
 * in a linked listint_t.
 * @h: pointer to the head of listint_t.
 * Return:number of elements in the listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t (nodes) = 0;

	while (h)
	{
		nodes++;
			h = h->next;
	}
	return (nodes);
}
