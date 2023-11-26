#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
 * add_node - Adds a node to a single linked list.
 * @head: A pointer to the pointer to the first element.
 * @str: The string to initialize the new node with.
 * Return: The newnode or Null if failed to malloc
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *l; /**pointer to struct list*/

	unsigned int counter = 0;
	unsigned int r;

	l = malloc(sizeof(list_t)); /**alloc for a new list_t node.*/

	if (l == NULL)
		return (NULL);

	l->str = strdup(str); /**assign input l to str*/

	for (r = 0; str[r] != '\0'; r++)
		counter++;
	l->len = counter;
	l->next = *head; /**moves to the next pointer to current head*/
	*head = l;

return (l);
}
