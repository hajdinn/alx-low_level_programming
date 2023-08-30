#include "main.h"
/**
 * actual_sqrt_recursion - function to find the actual number
 * @n: number to get the root
 * @i: random guess number
 * Return: root value
 */
int actual_sqrt_recursion(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = actual_sqrt_recursion(i + 1, n);

		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - return of naturasl quare root
 * @n: number to calculate
 * Return: squareroot value
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (actual_sqrt_recursion(i, n) == n && n != 1)
		return (-1);
	return (actual_sqrt_recursion(i, n));
}
