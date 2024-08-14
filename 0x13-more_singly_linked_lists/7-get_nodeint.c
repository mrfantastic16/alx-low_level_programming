#include "lists.h"

/**
 * get_nodeint_at_index - finds and returns a node at a particular index
 * @head: pointer to node head
 * @index: index to find node
 *
 * Return: index of node if node is found else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
