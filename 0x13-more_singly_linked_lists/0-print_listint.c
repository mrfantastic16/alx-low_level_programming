#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the ints in a node of a nodelist
 * @h: header which points to the nodelist
 *
 * Return: the number of nodes in the node list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
