#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* string_toupper - changes all lowercase to uppercase
* @n: pointer to array
* Return: n
*/

char *string_toupper(char *n)
{
	int a;

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
	}
	return (n);
}
