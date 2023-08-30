#include "main.h"
/**
 * actual_prime_number - does it for me
 * @i: interate
 * @n: integer to evaluate
 * Return: value
 */
int actual_prime_number(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (actual_prime_number(i + 1, n));
	return (1);
}
/**
 * is_prime_number -start of function is prime number
 * @n: integer toevaluate
 * Return: value
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (actual_prime_number(i, n));
}
