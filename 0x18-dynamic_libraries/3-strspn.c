#include "main.h"

/**
 * _strspn - Entry point
 * @s: pointer from source
 * @accept: pointer to source
 * Return: Number of bytes in the initial segment of s
 * that consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0; /**Number of bytes*/
	int r, found;

	for (r = 0; s[r] != '\0'; r++)
	{
		int a;

		found = 0; /**Initialize found flag for each character in s*/

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[r] == accept[a]) /**Checks if s[r] exists in accept*/
		{
			n++;

			found = 1; /**Set found flag to 1 if a match is found*/
			break; /**Break out of the accept loop*/
		}
		}
		if (!found) /**If no match is found in accept, exit the outer loop*/
			break;
		}
	return (n);
}
