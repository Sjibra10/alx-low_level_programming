#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t linked list.
 * @head: The first element of the list.
 * Return: The sum of the data if the list is not empty, 0 otherwise.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	const listint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;  /**Add the current node's value to the sum*/
		current = current->next; /**Move to the next node*/
	}
	return (sum);
}
