#include "main.h"

/**
 * get_bit - bit at a specified index in an unsigned long int.
 * @n: The unsigned long int from which to extract the bit.
 * @index: The index of the bit to retrieve.
 * Return: bit at the specified index, or -1 if index is out of range.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/**Checks index is out of bit system range (greater than 63).*/
	if (index > 63)
		return (-1);

	/**Extract the bit at the specified index using bitwise operations.*/
	bit_value = (n >> index) & 1;

	return (bit_value);
}
