#include "lists.h"
/**
 * sum_dlistint - Returns the sun of all the data of a dlistint_t linked list.
 * @head: The first element of the list.
 * Return: The sum of the data if the list is not empty.
 *	   0 otherwise.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	const dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
