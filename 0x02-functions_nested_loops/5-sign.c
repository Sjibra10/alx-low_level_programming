#include "main.h"
/**
*print_sign - prints all the paratemeters
*@n: is the character in question
*Return: 1 if greater 0, 0 if equal to 0, -1 if is -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
