#include <stdio.h>
/**
*main - Entry point
*
*
*Return: Always 0
*/

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z'; b++)
		putchar(b);
	for (b = 'A' ; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
return (0);
}
