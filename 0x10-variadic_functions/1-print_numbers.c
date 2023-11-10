#include "variadic_function.h"

/**
 * print_numbers - Prints number , followed by a new line.
 * @separator:
 * @n: number of parameter
 * Return: Always 0
 */

void print_numbers(const char *separator, conts unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);

	}

	printf("\n")

	va_end(ap);
}
