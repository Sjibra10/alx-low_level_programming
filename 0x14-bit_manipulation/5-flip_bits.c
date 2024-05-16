#include "main.h"

/**
 * flip_bits - Counts the number of bits changed to transform one
 * unsigned long integer into another.
 * @n: The starting unsigned long integer.
 * @m: The target unsigned long integer.
 * Return: The number of bits that need to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_count = 0;
	int i;
	unsigned long int xor_result = n ^ m;

	/* Loop through each bit to count the differences. */
	for (i = 0; i < 64; i++)
	{
		if (xor_result & (1UL << i))
			bit_count++;
	}

	return (bit_count);
}
