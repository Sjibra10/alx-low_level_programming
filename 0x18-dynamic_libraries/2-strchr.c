#include "main.h"
/**
* _strchr - Entry point
* @s: input
* @c: input
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++) /**seperate until r isn't null terminator*/
	{
		if (s[r] == c)
			return (&s[r]); /**searches for character 'l' that is == to c*/
	}
	return (0);
}

