#include "lists.h"

/**
 * free_listp - Frees a linked list of type listp_t.
 * @head: Pointer to the head of the list.
 * Return: No return value.
 */

void free_listp(listp_t **head)
{
	listp_t *current;
	listp_t *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints a linked list of type listint_t safely.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	listp_t *visited_nodes = NULL;
	listp_t *new_node, *node_iterator;

	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = visited_nodes;
		visited_nodes = new_node;

		node_iterator = visited_nodes;

		while (node_iterator->next != NULL)
		{
			node_iterator = node_iterator->next;
			if (head == node_iterator->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&visited_nodes);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_count++;
	}

	free_listp(&visited_nodes);
	return (node_count);
}
