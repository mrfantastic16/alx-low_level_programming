#include "lists.h"

/**
 * sum_listint - calcs and returns the data part of nodelist
 * @head: pointer to the beginning of the nodelist
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
