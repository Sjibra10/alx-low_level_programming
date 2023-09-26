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
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
