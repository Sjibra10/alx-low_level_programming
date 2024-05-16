#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: Pointer to the first node in the list.
 * Return: Pointer to the first node in the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current_next = NULL;

	while (*head)
	{
		current_next = (*head)->next;    /**Store the next node*/
		(*head)->next = previous;        /**Reverse the link*/
		previous = *head;               /**Move the 'previous' pointer*/
		*head = current_next;            /**Move the 'head' pointer*/
	}

	*head = previous; /**Updates head to point to first node of reversed list*/

	return (*head);
}
