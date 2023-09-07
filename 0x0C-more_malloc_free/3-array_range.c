#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *array_range - start of function to creates an array of integers
 * @min: minimum range
 * @max: maximum range of array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		s[j] = min++;

	return (s);
}
