#include <stdlib.h>
#include "main.h"
/**
 * create_array - start of function to creat array of size and assign char c
 * @size: array size
 * @c: assign char
 * Return: char or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (size == 0 || t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
