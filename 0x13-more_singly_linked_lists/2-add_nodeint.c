#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a single linked list.
 * @head: A pointer to the pointer to the first element.
 * @n: The integer to initialize the new node with.
 * Return: The address of the newly added node, or NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
