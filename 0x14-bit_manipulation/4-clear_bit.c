#include "main.h"

/**
 * clear_bit - Clears a bit at the specified index by setting it to 0.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear.
 * Return: 1 on success, -1 on failure (if the index is out of range).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is out of range (greater than 63).*/
	if (index > 63)
		return (-1);

	/*Clear the bit a specified index by using a bitwise operation.*/
	*n = (~(1UL << index) & *n);

	return (1);
}
