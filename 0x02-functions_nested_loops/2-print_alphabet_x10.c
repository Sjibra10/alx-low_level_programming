#include "main.h"
/**
*print_alphabet_x10 - prints lower alphabet 10 times
*followwed by a new line
*Return; 0
*/

void print_alphabet_x10(void)
{
	char lowercase;
	int b;

	b = 0;

	while (b < 10)
	{
		lowercase = 'a';

		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
	_putchar('\n');
	b++;
	}
}
