
#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
