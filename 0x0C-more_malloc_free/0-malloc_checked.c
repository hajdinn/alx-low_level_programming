#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *malloc_checked - start of function to check malloc
 * @b: integer to check
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
