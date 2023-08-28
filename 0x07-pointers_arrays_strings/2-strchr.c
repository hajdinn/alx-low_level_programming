#include "main.h"
/**
 * *_strchr - start of program to locate character in string
 * @c: character to find
 * @s: string to locate character
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
		return (s + x);
	return (0);
}
