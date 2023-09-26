#include "main.h"
#include <stdio.h>

/**
* _strcat- function that appends the src to dest for overwriting
* @dest: destination of the original pointer src
* @src: original pointer of the string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int destlen = 0; 
	int srclen = 0; 
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		destlen++;
	for (a = 0; src[a] != '\0'; a++)
		srclen++;
	for (a = 0; a <= srclen; a++)
		dest[destlen + a] = src[a];
return (dest);
}
