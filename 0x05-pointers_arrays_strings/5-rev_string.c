#include "main.h"
/**
 * rev_string - start of function that reverse string
 * @s: pointer string to print
 * Return: reverse string
 */
void rev_string(char *s)
{
	int w;
	int x;
	int y;
	char t;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;

	for (w = 0; w < x / 2; w++)
	{
		t = s[w];
		s[w] = s[y];
		s[y--] = t;
	}
}
