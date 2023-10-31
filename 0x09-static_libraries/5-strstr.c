#include "main.h"

/**
* _strstr - Find the first occurrence of needle in haystack
* @haystack: Input string to search within
* @needle: Substring to search for
* Return: Pointer to the first occurrence of needle in haystack,
*         or NULL if needle is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int r;
	int t;

	for (r = 0; haystack[r] != '\0'; r++)
	{
		for (t = 0; needle[t] != '\0'; t++)
		{
			if (haystack[r + t] != needle[t])
				break; /**If a character doesn't match, break the inner loop*/
		}
		if (needle[t] == '\0') /**If a match is found we end the string*/
			return (haystack + r);
	}
return ('\0');
}
