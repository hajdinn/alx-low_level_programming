#include "main.h"
/**
 * *_strstr - start of function that locate substring
 * @haystack: string
 * @needle: substring
 * Return: value
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	if (needle[0] == '\0')
		return (haystack);
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (haystack[y + x] != needle[y])
					break;
			}
			if (needle[y] == '\0')
				return (haystack + x);
		}
	}
	return ('\0');
}
