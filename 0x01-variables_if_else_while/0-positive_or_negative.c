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

	printf("The number %d is ", n);

	if (n > 0)
{
	printf("positive\n");
}
	else if (n == 0)
{
	printf("zero\n");
}
	else
{
	printf("negative\n");
}

	return (0);
}
