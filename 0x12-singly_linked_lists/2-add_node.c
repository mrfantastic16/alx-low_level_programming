#include "lists.h"

int _strlen(const char *str);

/**
 * add_node - add a node to the begginer of the list
 * @head: pointer to head
 * @str: string
 *
 * Return: node list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;
	return (new);
}

/**
 * _strlen - length of strings
 * @str: string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
