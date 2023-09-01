#include "main.h"
/**
 * _strcmp - start of function that compare string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: character value
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] - s2[x] == 0 && s1[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
