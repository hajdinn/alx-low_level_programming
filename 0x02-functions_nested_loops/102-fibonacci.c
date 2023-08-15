#include <stdio.h>
/**
 * main - start of program to print 50 fibonacci numbers
 * Return: void
 */
int main(void)
{
	int counter = 2;
	long int x = 1;
	long int y = x + 1;
	long int z = x + y;

	printf("%ld, %ld, ", x, y);
	while (counter < 50)
	{
		printf("%ld", z);
		counter++;
		x = y;
		y = z;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
