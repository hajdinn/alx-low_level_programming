#include "main.h"
/**
 * _strcpy - start of function that copies the string pointed to by src
 * @dest: pointer to where to copy
 * @src: what to copy
 * Return: a value
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
