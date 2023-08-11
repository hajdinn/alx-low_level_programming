#include <stdio.h>
/**
 * main - start of programn to print combination of numbers
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	int x;

	for (x = 10; x < 20; x++)
	{
		putchar((x % 10) + '0');
		if (x != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
