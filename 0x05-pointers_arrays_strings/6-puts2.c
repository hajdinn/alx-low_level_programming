#include "main.h"
/**
 * puts2 - start of function that print every other character of a string
 * @str: string to input
 * Return: void
 */
void puts2(char *str)
{
	int x;
	int y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
	_putchar(str[y]);
	}
	_putchar('\n');
}
