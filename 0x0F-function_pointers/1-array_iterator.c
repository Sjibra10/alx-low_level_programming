#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes fnction on each element of array
 * @array: the array
 * @size: the size of the array
 * @action: function pointer to perfom on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
