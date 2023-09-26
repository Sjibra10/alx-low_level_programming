#include "main.h"

/**
* _memset - fills a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: the bytes address value
* @n: number of bytes to be changed
* Return: arrays of s in value of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
