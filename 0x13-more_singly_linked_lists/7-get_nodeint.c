#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: The head of the linked list.
 * @index: The index of the node to return.
 * Return: A pointer to the nth element if it exists, NULL otherwise.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0; /**traversing list counter*/

	current = head;
	while (current != NULL && (i < index))
	{
		current = current->next; /**moves to next node*/
		i++;
	}
	return (current);
}
