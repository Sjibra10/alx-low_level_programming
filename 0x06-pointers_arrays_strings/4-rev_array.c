#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the conent of an array of intergers
 *@a: pointer array
 *@n: the number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
