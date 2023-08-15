#include "main.h"
/**
 * times_table - start of function that prints the 9 times table
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int prod = y * x;

			if (y == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
