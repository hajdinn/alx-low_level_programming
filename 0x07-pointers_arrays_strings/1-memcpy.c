#include "main.h"
/**
 * *_memcpy - start of function that copies memory area
 * @src: source memory
 * @dest: dest to copy memory to
 * @n: time n
 * Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
