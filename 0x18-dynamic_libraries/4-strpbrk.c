#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int r;
	int t;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[r] == accept[t]) /**if s equal to accept prints pointer s byte */
				return (s + r); /**Return accept to the matching character in s */
		}
	}
return (0);
}
