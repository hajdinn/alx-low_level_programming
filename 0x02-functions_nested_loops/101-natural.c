#include <stdio.h>
/**
 * main - start of program that computes and prints the sum of all the multiple
 * Return: 0 (program is a success)
 */
int main(void)
{
	int x = 1;
	int y = 0;

	while (x < 1024)
	{
		if (x % 3 == 0)
			y += x;
		else if (x % 5 == 0)
			y += x;

		x++;
	}
	printf("%d\n", y);

	return (0);
}
