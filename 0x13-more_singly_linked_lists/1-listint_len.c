#include "lists.h"

/**
 * listint_len - Count the number of nodes in a linked list.
 * @h: A pointer to the linked list to iterate.
 * Return: The number of nodes in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current_node;
	size_t node_count = 0;

	current_node = h;

	while (current_node)
	{
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
