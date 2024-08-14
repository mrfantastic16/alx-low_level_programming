#include "lists.h"

/**
 * listint_len - returns the length of a nodelist
 * @h: head which points to the beginning of the nodelist
 *
 * Return: no of nodes in the nodelist
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
