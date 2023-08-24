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
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, digits = 0;
	int value1 = 0, value2 = 0, t_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			value1 = 0;
		else
			value1 = *(n1 + x) - '0';
		if (y < 0)
			value2 = 0;
		else
			value2 = *(n2 + y) - '0';
		t_tot = value1 + value2 + overflow;
		if (t_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (t_tot % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
