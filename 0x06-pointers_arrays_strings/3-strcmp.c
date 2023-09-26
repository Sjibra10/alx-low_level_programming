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
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			if (s1[a] < s2[a])
				return (s1[a] - s2[a]);
			else if (s1[a] > s2[a])
				return (s1[a] - s2[a]);
		}
	}
	return (0);
}
