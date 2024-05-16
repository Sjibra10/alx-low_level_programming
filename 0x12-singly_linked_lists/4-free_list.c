#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Release the memory allocated for a list
 * @head: A pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next); /**moves to next node recursively*/
		if (head->str) /**Checks 'str' current node is not NULL.*/
			free(head->str); /**free string memory if str isnt NULL*/
		free(head); /**Free memory for the current node.*/
	}
}
