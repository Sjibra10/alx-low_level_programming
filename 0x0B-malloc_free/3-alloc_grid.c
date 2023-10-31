#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 demensional array of integers.
 * @width: The width of the matrix.
 * @height: The height of the matrix.
 * Return: A pointer to the matrix if height and width are > 0.
 *	   NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **res = NULL;
	int i = 0, j = 0, e = 0;

	if (width > 0 && height > 0)
	{
		res = (int **)malloc(height * sizeof(int *));
		if (res != NULL)
		{
			for (i = 0; i < height && e == 0; i++)
			{
				res[i] = (int *)malloc(width * sizeof(int));
				if (res[i] != NULL)
					for (j = 0; j < height; j++)
						res[i][j] = 0;
				else
					e = 1;
			}
			if (e == 1)
			{
				for (; i >= 0; i--)
					free(res[i]);
				free(res);
			}
		}
	}
	return (res);
}
