#include "main.h"
/**
 * factorial - start of function that returns the factorial of a given number
 * @n: number to use
 * Return: value
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}

