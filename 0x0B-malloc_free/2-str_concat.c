#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string to be concatenates
 * Return: pointer to new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int r;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (r = 0; s1[r] != '\0'; r++) /**lenghth of the strings*/
		s1length++;
	for (r = 0; s2[r] != '\0'; r++)
		s2length++;

	result = malloc(sizeof(char) * (s1length + s2length) + 1);
	/**sizeof char until '\0'*/

	if (result == NULL)
		return (NULL);
	for (r = 0; s1[r] != '\0'; r++)
		result[r] = s1[r];
	for (r = 0; s2[r] != '\0'; r++)
		result[s1length + r] = s2[r];
		/**copies indexes of s2 to s1*/

return (result);
}
