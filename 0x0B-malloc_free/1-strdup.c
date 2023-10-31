#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string to new allocated space in memory
 * @str: string to copy the new memory
 * Return: Pointer to the new memory
 */

char *_strdup(char *str)
{
	char *newmemo;
	int count = 0;
	int r;

	if (str == NULL)
		return (NULL);
	for (r = 0; str[r] != '\0'; r++)
		count++;
	newmemo = malloc(sizeof(char) * count + 1); /**copies until null terminator*/

	if (newmemo == NULL)
		return (NULL);
	for (r = 0; str[r] != 0; r++)
		newmemo[r] = str[r]; /**copies every new memory index to str*/

	return (newmemo);
}
