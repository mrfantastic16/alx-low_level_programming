#include "lists.h"

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head))
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
