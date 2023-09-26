#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination pointer
 * @src: source pointer
 * @n: the element of index in src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[len + a] = *src;
		src++;
	}
	dest[len + a] = '\0';

return (dest);
}
