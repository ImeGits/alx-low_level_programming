#include "lists.h"

/**
 * listint_len - returns the number of elements on a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t dodes = 0;

	while (h != NULL)
	{
		h = h->next;
		dodes++;
	}
	return (dodes);
}
