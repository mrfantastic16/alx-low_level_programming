#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints strings in a particular and counts two no. of nodes
 * @h: head which points to the beginning of the node
 *
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!(h->str))
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
