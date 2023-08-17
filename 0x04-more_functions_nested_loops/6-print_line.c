#include "main.h"
/**
 * print_line - start of function that draws a straight line in the terminal
 * @n: integer to print number of times
 * Return: 0
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
