#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The data of the deleted head's node if the list is not empty,
 *         0 otherwise.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;  /** Store the data of the head node.*/
		temp = *head;
		*head = (*head)->next;  /** Update the ead to the next node.*/
		free(temp);  /** Free the old head node.*/
	}
	return (data);
}
