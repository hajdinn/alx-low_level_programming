#include "main.h"
/**
 * print_last_digit - start of program to print last digit of a number
 * @n: The number to be done
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
