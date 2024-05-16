#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to a pointer to the first element of the list.
 * @idx: The position of insertion.
 * @n: The data of the new node.
 * Return: The address of the new node if successful, NULL otherwise.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node)
	{
		node->n = n;
		if (idx == 0) /**if idx is 0 isnert new node as new head list*/
		{
			node->next = *head;
			*head = node; /**Update the head to point to the new node*/
		}
		else
		{
			tmp = *head;
			while (tmp && i < idx - 1)
			{
				tmp = tmp->next;
				i++;
			}
			if (i == idx - 1) /**stops one node before*/
			{
				node->next = tmp->next;
				tmp->next = node; /**moves to the next node and stores*/
			}
			else
			{
				free(node); /**Free the node if insertion fails*/
				return (NULL);
			}
		}
	}
	return (node);
}
