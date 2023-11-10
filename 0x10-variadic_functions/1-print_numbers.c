#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed
 * Return: number of elements in the string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list arg;

	va_start(arg, n);

	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(arg, int));

		if (r != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
