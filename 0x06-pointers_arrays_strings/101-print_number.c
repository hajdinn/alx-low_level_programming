#include "main.h"
/**
 * print_number - start of program to print numbers
 * @n: number to convert
 * Return: void
 */
void print_number(int n)
{
	unsigned int abs;
	unsigned int abscount;
	int mult = 1;
	int x;
	int y = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abscount = n;
	while (abscount > 0)
	{
		abscount /= 10;
		y++;
	}
	for (x = 0; x < y - 1; x++)
		mult *= 10;
	for (x = 0; x < y; x++)
	{
		_putchar((abs / mult) + '0');
		abs = abs % mult;
		mult /= 10;
	}
}
