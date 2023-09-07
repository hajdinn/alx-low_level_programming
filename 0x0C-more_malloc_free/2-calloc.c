#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - start of calloc function
 * @nmemb: element number
 * @size: byte size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
		s[j] = 0;

	return (s);
}

