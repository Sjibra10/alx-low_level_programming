#include "main.h"
#include <stdio.h>

/**
 *print_array - functions that prints n elements of an array of intergers
 *@a: the pointer of the array
 *@n: the number of elements
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
printf("\n");
}
