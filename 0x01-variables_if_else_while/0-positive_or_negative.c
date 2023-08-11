#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starting of program will assign a random number to variable
 *
 *
 * Return: 0 (successful program)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
