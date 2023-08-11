#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start of program that assign a random number to variable
 *
 * Return: 0 (sucessful program)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and  is greather than 5\n", n, lastdigit);
	} else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, lastdigit);
	}
	return (0);
}
