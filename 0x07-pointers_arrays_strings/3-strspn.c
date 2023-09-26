#include "main.h"

/**
 * _strspn - Entry point
 * @s: pointer from source
 * @accept: pointer to source
 * Return: Number of bytes in the initial segment of s
 * that consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a, find;

	for (a = 0; s[a] != '\0'; a++)
	{
		int b;

		find = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
		{
			n++;

			find = 1;
			break;
		}
		}
		if (!find)
			break;
		}
	return (n);
}
