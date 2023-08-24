#include "main.h"
/**
 * *rot13 - start of function that encodes a string using rot13
 * @z: string
 * Return: Character
 */
char *rot13(char *z)
{
	int x;
	int y;
	char segment1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char segment2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; z[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (z[x] == segment1[y])
			{
				z[x] = segment2[y];
				break;
			}
		}
	}
	return (z);
}
