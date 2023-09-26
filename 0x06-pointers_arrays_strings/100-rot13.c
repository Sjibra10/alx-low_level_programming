#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @s: pointer to string params
* Return: s
*/

char *rot13(char *s)
{
	int a;
	int b;
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char destrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == src[b])
			{
				s[a] = destrot[b];
				break;
			}
		}
	}
	return (s);
}

