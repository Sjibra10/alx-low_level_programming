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

	for (a1 = 0; a1 < 100; a1++)
	{
		for (b2 = 0; b2 < 100; b2++)
		{
			if (a1 < b2)
			{
				putchar((a1 / 10) + 48);
				putchar((a1 % 10) + 48);
				putchar(' ');
				putchar((b2 / 10) + 48);
				putchar((b2 % 10) + 48);
				if (a1 != 98 || b2 != 99)
				{
					putchar(',');
					putchar (' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
