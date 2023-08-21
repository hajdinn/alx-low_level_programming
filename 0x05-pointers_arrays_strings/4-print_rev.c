#include "main.h"
/**
 * print_rev - start of function to print string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
