#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the first element of the list.
 * @index: The position of the node to delete.
 * Return: 1 if successful, -1 if the node is not found or fails to be deleted.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
	{
		return (-1); /**List is empty, return -1 (failure)*/
	}

	if (index == 0)
	{
		tmp2 = *head;
		*head = (*head)->next; /**Update the head to point to the second node*/
		free(tmp2); /**Free the old head node*/
		return (1); /**Successfully deleted the node*/
	}

	tmp = *head;
	while (tmp->next != NULL && i + 1 < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i + 1 == index && tmp->next != NULL)
	{
		tmp2 = tmp->next;
		tmp->next = tmp2->next;
		free(tmp2);
		return (1); /**Successfully deleted the node*/
	}
return (-1);
}
