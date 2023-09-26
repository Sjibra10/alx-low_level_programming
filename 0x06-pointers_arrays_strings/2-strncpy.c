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
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
return (dest);
}
