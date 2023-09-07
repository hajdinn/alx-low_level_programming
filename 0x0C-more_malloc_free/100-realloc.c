#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - start of function to reallocates a memory block using malloc
 * @ptr: pointer to the old memory allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrs;
	char *old_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptrs = malloc(new_size);
	if (!ptrs)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			ptrs[j] = old_ptr[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			ptrs[j] = old_ptr[j];
	}

	free(ptr);
	return (ptrs);
}
