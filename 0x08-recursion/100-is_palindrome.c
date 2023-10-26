#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s);
int check_pali(char *s, int t, int length);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer string to be checked and reversed
 * Return: 1 if pal and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
return (check_pali(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pali - checks the characters recursively for palindrome
 * @s: pointer string to checked and reversed
 * @t: iterator used to store pointer char
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check_pali(char *s, int t, int length)
{
	if (*(s + t) != *(s + length - 1)) /**compares the values of t & length*/
	{
		return (0);
	}
	if (t >= length)
	{
		return (1);
	}
return (check_pali(s, t + 1, length - 1));
}
