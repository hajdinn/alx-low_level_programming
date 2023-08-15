#include "main.h"
/**
 * print_sign - start of program to prints the sign of a number
 *
 * @n: number to be checked
 * Return: 1 for positive number, -1 for negative number, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
