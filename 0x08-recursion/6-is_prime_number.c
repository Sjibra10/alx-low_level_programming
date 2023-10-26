#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the interger to be counted
 * Return: 1 when n is a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - returns real prime numbers as it gets recursive call
 * @n: the interger to be counted
 * @t: iterator thats gonna print out real numbers
 * Return: 1 when is a prime and 0 not.
 */

int real_prime_number(int n, int t)
{
	if (t == 1) /**it will return 1 as 1 is a prime number*/
	{
		return (1);
	}
	if (n % t == 0 && t > 0) /**if remainder is 0 and is > return 0*/
	{
		return (0);
	}
return (real_prime_number(n, t - 1));
}
