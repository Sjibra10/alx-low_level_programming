#include "main.h"
#include <stdio.h>

/**
 *_strcpy - function that copies the string pointed to by src, including (\0)
 *@dest: the buffer pointer to be equal to src
 *@src: the pointer to be pointed by dest
 *Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; src[r] != '\0'; r++)
		dest[r] = src[r]; /**pointer src array is equal to pointer dest*/

	dest[r] = '\0'; /**it will include the null terminator into the dest array*/

	return (dest);
}
