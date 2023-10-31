#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcmp - a function that compares strings.
* @s1: first string compared
* @s2: second string compared to s1
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int r;

	for (r = 0; s1[r] != '\0' || s2[r] != '\0'; r++)
	{
		if (s1[r] != s2[r])
		{
			if (s1[r] < s2[r])
				return (s1[r] - s2[r]);
			else if (s1[r] > s2[r])
				return (s1[r] - s2[r]);
		}
	}
	return (0);
}
