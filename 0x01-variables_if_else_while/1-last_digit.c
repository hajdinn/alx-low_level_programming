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
	int lastdigit = abs(n) % 10;

	srand(time(0))'
		n = rand() - RAND_MAX / 2;

	printf("last digit of %d is",n);
	if(lastdigit > 5)
	{
		printf("and is greather than 5\n");
	} else if(lastdigit == 0)
	{
		printf("and is 0\n");
	} else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
