#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: interger doesnt have natural sqaureroot
 * Return: return result sqaure root n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /**error*/
	}
	return (new_sqrt_recursion(n, 0));
}

/**
 * new_sqrt_recursion - returns the natural square root of a number.
 * @n: interger to be counted
 * @t: iterator
 * Return: return result of sqaure root t
 */

int new_sqrt_recursion(int n, int t)
{
	if (t * t > n)
	{
	return (-1);
	}
	if (t * t == n) /**gives t ^ 2 = 0*/
	{
		return (t); /**returns the positive interger*/
	}
	return (new_sqrt_recursion(n, t + 1));
}
