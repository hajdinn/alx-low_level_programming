#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - start of function to create matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);

		if (t[i] == NULL)
		{
			for (; i >= 0; i--)
				free(t[i]);

			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}

	return (t);
}
