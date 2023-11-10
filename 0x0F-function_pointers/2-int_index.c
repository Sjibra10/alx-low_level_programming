#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - seaeches for an interger
 * @array: array to search from
 * @size: size of the array
 * @cmp: pointer function to the array
 * Return: the index if matches and -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
return (-1);
}
