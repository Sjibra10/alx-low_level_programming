#include "main.h"
#include <stdio.h>

/**
* leet - a function that encodes a string into 1337
* @p: pointer to the original value
* Return: p value
*/
char *leet(char *p)
{
	int a;
	int b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)

		{
			if (p[a] == s1[b])
			{
				p[a] = s2[b];
			}
		}
	}
	return (p);
}
