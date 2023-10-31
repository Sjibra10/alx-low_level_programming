#include <stdlib.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * argstostr - Concatenates all the arguments.
 * @ac: The number of arguments.
 * @av: The arguments array.
 * Return: A string of arguments, each followed by \n.
 *	   NULL id ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, n = 0;
	char *res = NULL;

	if (ac != 0 && av != NULL)
	{
		for (i = 0; i < ac; i++)
			n += _strlen(av[i]);
		res = malloc((ac + n + 1) * sizeof(char));
		if (res != NULL)
		{
			for (i = 0; i < ac; i++)
			{
				n = _strlen(av[i]);
				for (j = 0; j < n; j++)
					res[k++] = av[i][j];
				res[k++] = '\n';
			}
		}
	}
	return (res);
}
