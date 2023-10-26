#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x power raised.
 *@x: recursive call interger
 *@y: interger to be raised to power
 *Return: 0 always sucess
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
		/**its like x ^ y -1) until x ^ 0 = 1*/
	}
return (0);
}
