#include "main.h"
/**
 * more_numbers - start of function to print more numbers
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
