#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array.
 * @width: width of the pointer coloumns
 * @height:height of the width rows
 * Return: size of the pointer array
 */

int **alloc_grid(int width, int height)
{
	int r;
	int t;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height); /**memory allocation for rows*/

	if (result == NULL)
		return (NULL);

	for (r = 0; r < height; r++) /**finding rows length*/
	{
		result[r] = malloc(sizeof(int) * width);
		/**allocating height to width to store rows*/

		if (result[r] == NULL)
		{	/**freeing space taken by height*/
			free(result);
			for (t = 0; t <= height; t++)
				free(result[r]);
		}
		/**start indexing at 0 matching column and rows*/
		for (t = 0; t < width; t++)
			result[r][t] = 0;
	}
return (result);
}
