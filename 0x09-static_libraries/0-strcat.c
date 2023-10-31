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
	int destlen = 0; /**counter for the first loop*/
	int srclen = 0; /**counter for the second loop*/
	int r;

	for (r = 0; dest[r] != '\0'; r++)
		destlen++;
	for (r = 0; src[r] != '\0'; r++)
		srclen++;
	for (r = 0; r <= srclen; r++) /**equals the length of src array*/
		dest[destlen + r] = src[r]; /**copy & concatenates index 0 of src to dest*/
return (dest);
}
