#include "lists.h"

/**
 * find_listint_loop - Finds the starting node of a loop in a linked list.
 * @head: Linked list to search for a loop.
 * Return: Address node loop starts, or NULL if no loop is found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;         /**Move slow pointer by one step*/
		fast = fast->next->next;  /**Move fast pointer by two steps*/

		if (slow == fast)
		{
			slow = head;            /**Reset slow to the head of the list*/
			while (slow != fast)
			{
				slow = slow->next;  /**Move both pointers at the same speed*/
				fast = fast->next;  /**until they meet at the loop's start*/
			}
			return (fast);
		}
	}

	return (NULL); /**No loop found*/
}
