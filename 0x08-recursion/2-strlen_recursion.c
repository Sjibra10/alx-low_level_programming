#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *@s: The pointer of the string
 *Return: 0 alwyas success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{

	return (1 + _strlen_recursion(s + 1));
	}
return (0);
}
