#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@a: is the character in int and in question
*Return: value of the last digit
*/

int print_last_digit(int a)
{
	int b;

	if (a < 0)
		a = -a;
	b = a % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');

	return (b);
}
