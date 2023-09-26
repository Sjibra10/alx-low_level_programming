#include  "main.h"
/**
* rev_string - Reverses  a  string
* @s:  Input  string
*/

void rev_string(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;
	for  (a  =  0;  a < b / 2; a++)
	{
		char c;

		c = s[a];
		s[a] = s[b - 1 - a];
		s[b - 1 - a] = c;
	}
}
