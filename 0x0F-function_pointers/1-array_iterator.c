#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @array: array to go through
 * @size: size of array
 * @action: function to take
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
