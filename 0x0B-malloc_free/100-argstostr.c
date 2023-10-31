#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguements of a function
 * @ac: first tring
 * @av: pionter pointed to string
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int r, t, p = 0;
	int count = 0;
	char *result;

	for (r = 0; r < ac; r++) /**lenght of ac*/
	{
		for (t = 0; av[r][t] != 0; t++) /**combining index*/
			count++;
		count++;
		/**creating space*/
	}
	result = malloc(sizeof(char) * count + 1);
	if (result == NULL)
		return (NULL);

	for (r = 0; r < ac; r++)
	{
		for (t = 0; av[r][t] != '\0'; t++)
		{
			result[p] = av[r][t];
			p++;
			/**concatenate & storing each character in result*/
		}
	result[p++] = '\n';
	/**beforen r++ create new line*/
	}
result[p] = '\0';
return (result);
}
