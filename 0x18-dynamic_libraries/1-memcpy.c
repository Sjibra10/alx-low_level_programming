#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of elements in bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int t = n;

	for (r = 0; r < t; r++)
	{
		dest[r] = src[r]; /**assigns memory area of dest to src as n decrements*/
		n--;
	}
	return (dest);
}
