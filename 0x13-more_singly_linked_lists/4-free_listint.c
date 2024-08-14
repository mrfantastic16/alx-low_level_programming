#include "lists.h"

/**
 * free_listint - frees a nodelist
 * @head: pointer to the beginning of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
