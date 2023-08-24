#include "main.h"
/**
 * *leet - start of function that encode a string into 1337
 * @z: string
 * Return: character
 */
char *leet(char *z)
{
	int x;
	int y;

	char alphanumArr[] = "a4A4e3E3o0O0t7T7l1L1";

	x = 0;
	y = 0;

	for (x = 0; z[x] != '\0'; x++)
	{
		for (y = 0; alphanumArr[y] != '\0'; y++)
		{
			if (z[x] == alphanumArr[y])
			{
				z[x] = alphanumArr[y + 1];
				break;
			}
		}
	}
	return (z);
}
