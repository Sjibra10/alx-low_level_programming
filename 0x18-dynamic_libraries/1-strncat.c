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
	int length = strlen(dest); /**function used to find the length)*/
	int r;

	for (r = 0; r < n && *src != '\0'; r++) /** r < n and strc not '\0'*/
	{
		dest[length + r] = *src; /**appends n(W) index of src to dest*/
		src++;
	}
	dest[length + r] = '\0'; /**Adds the '\0' into dest*/

return (dest);
}
