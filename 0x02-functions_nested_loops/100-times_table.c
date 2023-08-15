#include "main.h"
/**
 * print_times_table - function for time table
 * @n: integer to return
 */
void print_times_table(int n)
{
	int x;
	int y;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
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
					_putchar(' ');
					_putchar('0' + prod);
				} else if (prod > 99)
				{
					_putchar('.');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
