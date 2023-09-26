#include "main.h"
/**
* puts_half - a function that prints half of a string
* for half of string, n = (length_of_the_string - 1) / 2
* @str: input
*/
void puts_half(char *str)
{
	int a;
	int b;
	int count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;

	b = (count - 1) / 2;

	for (a = b + 1 ; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
