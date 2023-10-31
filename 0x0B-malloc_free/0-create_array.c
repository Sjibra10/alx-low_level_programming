#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array.
 * @c: char to story size of array
 * @size: size of array
 * Return: pointer to the array stored
 */

char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *allocation;

	if (size == 0)
		return (NULL);

	allocation = malloc(sizeof(char) * size); /**multiples char by sie*/

	if (allocation == NULL)
		return (NULL);

	for (r = 0; r < size; r++) /**allocates every memory index of r to c*/
		allocation[r] = c;

	return (allocation);
}
