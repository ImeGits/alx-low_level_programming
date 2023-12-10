#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cal;

	cal = 0;

	if (h == NULL)
		return (cal);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cal++;
		h = h->next;
	}

	return (cal);
}
