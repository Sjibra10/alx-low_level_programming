#include "main.h"
/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: the pointer
*/
void  puts2(char *str)
{
	int len = 0;
	int s = 0;
	int b;
	char *a = str;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	s = len - 1;
	for  (b = 0 ; b <= s ; b++)
	{
		if  (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
_putchar('\n');
}
