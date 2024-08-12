#include <stddef.h>
#include "lists.h"

/**
 * list_len - counts the number of nodes in nodelist
 * @h: head which points to the beggining to list
 *
 * Return: length of nodes in a nodelist
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
