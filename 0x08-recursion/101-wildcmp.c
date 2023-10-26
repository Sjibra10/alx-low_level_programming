#include <stdio.h>
#include "main.h"

/**
 * wildcmp - Compare two strings for identical
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*') /**checks if s2 is null and wildcard(*)*/
		{
			return (wildcmp(s1, s2 + 1)); /** (*) will be inserted where s1 is 0*/
		}
	return (*s2 == '\0'); /**returns 1 if strings compare*/
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)); /**s1 and s2 ++*/
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
return (0);
}
