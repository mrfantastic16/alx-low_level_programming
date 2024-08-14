#include "lists.h"

/**
 * pop_listint - removes the first the node of a node list
 * @head: double pointer to the head of the list
 *
 * Return: the value of the deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int v;

	if (head == NULL || *head == NULL)
		return (0);

	v = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (v);
}
