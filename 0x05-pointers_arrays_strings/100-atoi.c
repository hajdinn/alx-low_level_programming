#include "main.h"
/**
 * _atoi - start of a function that convert a string to an integer
 * @s: string to convert
 * Return: integer value
 */
int _atoi(char *s)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int num;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	num = 0;

	while (s[d] != '\0')
		d++;
	while (a < d && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}

