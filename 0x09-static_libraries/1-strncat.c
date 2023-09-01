#include "main.h"
/**
 * *_strncat - start of function that copies a string
 * @dest: destinatio n of string
 * @src: source of string
 * @n: number of bytes
 * Return: character value
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	for (y = 0; dest[y] != '\0'; y++)
	{
	}
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';
	return (dest);
}
