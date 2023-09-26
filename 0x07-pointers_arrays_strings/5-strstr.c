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
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
return ('\0');
}
