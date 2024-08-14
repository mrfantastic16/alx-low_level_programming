#include "lists.h"

int _strlen(const char *s);

/**
 * add_node_end - adds a node to the end of a node list
 * @head: pointer to the pointer that points to the nodeList
 * @str: string of the new node to be created
 *
 * Return: The address of the new node that has been created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - calculates and returns the length of a given string
 * @s: string whose length we want
 *
 * Return: length of @s
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
