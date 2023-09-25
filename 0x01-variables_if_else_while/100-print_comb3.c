#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a1;
	int b2;

	for (a1 = '0'; a1 <= '8'; a1++)
	{
		for (b2 = a1 + 1; b2 <= '9'; b2++)
		{
			putchar(a1);
			putchar(b2);
			if (a1 == '8' && b2 == '9')
			{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
return (0);
}
