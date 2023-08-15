#include <stdio.h>
/**
 * main - start program to finds and prints the sum of the even-valued terms
 * Return: 0 (success)
 */
int main(void)
{
	int x = 1, y = 2, total = 0;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			total += y;

		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", total);
	return (0);
}
