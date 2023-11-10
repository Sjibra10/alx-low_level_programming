#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: the number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int r;

	va_start(arg, n);

	for (r = 0; r < n; r++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (r != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
printf("\n");
va_end(arg);
}
