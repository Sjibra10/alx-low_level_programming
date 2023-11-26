#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	/**Check if n is zero, a special case.*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/**Loop through each bit of the number.*/
	for (i = 63; i >= 0; i--)
	{
		/**Check if the i-th bit is 1 using bitwise operations.*/
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		/**If bits have been encountered, 0 for trailing bits.*/
		else if (flag)
		{
			_putchar('0');
		}
	}
}
