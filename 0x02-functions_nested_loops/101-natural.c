#include <stdio.h>
/**
 * main - start of program that computes and prints the sum of all the multiple
 * Return: 0 (program is a success)
 */
int main(void)
{
	int x;
	int y = 0;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			x += y;
		}
	}
	printf("%d\n", y);
	return (0);
}
