#include "main.h"
/**
 * rev_string - start of function that reverse string
 * @s: pointer string to print
 * Return: void
 */
void rev_string(char *s)
{
	int x;
	char y;

	for (x = 0; x < (s[x]) / 2; x++)
	{
		y = s[x];
		s[x] = s[(x) - x - 1];
		s[(x) - x - 1] = y;
	}
}
