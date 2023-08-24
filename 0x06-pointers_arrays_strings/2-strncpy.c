#include "main.h"
/**
 * *_strncpy - start of function that copies a string
 * @dest: destination to copy string
 * @src: source of string
 * @n: number of assigned bytes
 * Return: Destination of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
