#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in alinked list_t
 * @h: pointer to a linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temporary;
	size_t r = 0;

	temporary = h; /**stores the first node*/

	if (temporary)
		temporary = h; /**check if null in tempo*/
	while (temporary)
	{
		r++;
		temporary = temporary->next; /**moves to next node*/
	}
return (r);
}
