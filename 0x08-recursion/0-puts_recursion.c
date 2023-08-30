#include "main.h"
/**
 * _puts_recursion - start of function that print a string
 * @s: string to print
 * Return: character
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
