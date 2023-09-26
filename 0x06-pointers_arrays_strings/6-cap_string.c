#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* cap_string - a function that capitalizes all words of a string.
* @str: The string to be capitalized.
* Return: pointer to the changed string.
*/

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (
				str[a - 1] == ' ' ||
				str[a - 1] == '\t' ||
				str[a - 1] == '\n' ||
				str[a - 1] == ',' ||
				str[a - 1] == ';' ||
				str[a - 1] == '.' ||
				str[a - 1] == '!' ||
				str[a - 1] == '?' ||
				str[a - 1] == '"' ||
				str[a - 1] == '(' ||
				str[a - 1] == ')' ||
				str[a - 1] == '{' ||
				str[a - 1] == '}' ||
				a == 0
			)
			{
				str[a] -= 32;
			}
		}

	}
	return (str);
}
