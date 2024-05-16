#include "main.h"

/**
 * set_bit - Sets a bit at the specified index to 1.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set to 1.
 * Return: 1 on success, -1 on failure (if index is out of range).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/**Checks if index is out of range (greater than 63).*/
	if (index > 63)
		return (-1);

	/**Set the bit specified index to 1 using bitwise operations.*/
	*n = ((1UL << index) | *n);

	return (1);
}
