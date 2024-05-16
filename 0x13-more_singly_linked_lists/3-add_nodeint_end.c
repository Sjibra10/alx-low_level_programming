#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer to add as the value of the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n; /**set new node to provided integer*/
		new_node->next = NULL; /**next pointer to null*/

		if (*head == NULL)
		{
			/**if list is empty make new_node the head list*/
			*head = new_node;
		}
		else
		{
			current = *head;

			while (current->next != NULL)
			{
				current = current->next; /**traverse the list to find last node*/
			}
			current->next = new_node;
		}
	}
return (new_node);
}
