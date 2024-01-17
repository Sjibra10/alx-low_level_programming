#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strncpy - a function that copies a string.
* @src: source of the string copied
* @dest: destination were copied from source
* @n: the number of elemenent
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int r;

	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[r] = src[r]; /**copies indexes of src to dest*/
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
return (dest);
}
