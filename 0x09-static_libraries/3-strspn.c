#include "main.h"
/**
 * _strspn - start of function to length of prefix substring
 * @accept: byte from accept
 * @s: string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int w = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				w++;
				break;
			}
		}
		if (s[y] == '\0')
			return (w);
	}
	return (w);
}
