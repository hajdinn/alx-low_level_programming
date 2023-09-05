#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - start of function that gives array of argument
 * @ac: argument count
 * @av:  array of argument
 * Return: value
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	size += ac;

	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[k] = av[i][j];
		k++;
	}
	if (s[k] == '\0')
	{
		s[k++] = '\n';
	}
	}
	return (s);
}
