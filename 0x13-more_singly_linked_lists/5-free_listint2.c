#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: Pointer to a pointer to the listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;  /**Stores next node to avoid memory leaks.*/
		free(*head);  /**Free the current node.*/
		*head = current;  /**Move to the next node.*/
	}
	*head = NULL;
}
