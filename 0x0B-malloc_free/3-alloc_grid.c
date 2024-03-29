#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a function that returns a pointer to a 2 dimensional array of
  * integers.
  * @width: width of the grid
  * @height: height of the grid
  * Return: pointer to two dimensional array
  * on failure return NULL, If width or height is 0 or negative, return NULL
  */
int **alloc_grid(int width, int height)
{
	int **array, i, j;


	if (width <= 0 || height <= 0)
		return (NULL);


	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

