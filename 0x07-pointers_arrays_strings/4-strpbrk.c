#include "main.h"
/**
 * *_strpbrk - start of function that searches for string
 * @accept: string bytes
 * @s: string
 * Return: value
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (0);
}
