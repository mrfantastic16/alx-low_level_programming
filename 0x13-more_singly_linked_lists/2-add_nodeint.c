#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a node list
 * @head: pointer to the pointer that points to the beginning
 * of the nodelist
 * @n: int to be added to node of the nodelist
 *
 * Return: address of newly inserted node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
