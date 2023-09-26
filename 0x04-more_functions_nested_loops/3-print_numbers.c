#include "main.h"
/**
*print_numbers - numbers 0-9
*Return: 0
*/

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
