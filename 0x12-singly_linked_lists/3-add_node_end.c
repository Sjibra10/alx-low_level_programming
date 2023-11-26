#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: constant string to the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l;
	list_t *temporary;

	unsigned int r;
	unsigned int counter = 0;

	l = malloc(sizeof(list_t));

	if (l == NULL)
		return (NULL);
	l->str = strdup(str); /**duplicate and store string*/

	for (r = 0; str[r] != '\0'; r++)
		counter++;
	l->len = counter;
	l->next = NULL; /**last node pointing nothing*/
	temporary = *head; /**stores head to temporary*/

	if (temporary == NULL)
		*head = l;
	else
	{
		while (temporary->next != NULL) /**to reach last node*/
			temporary = temporary->next; /**moves to new node stored in tmp*/
		temporary->next = l;
	}
return (*head);
}
