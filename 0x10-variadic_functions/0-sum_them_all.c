#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - start of function for the sum of all its paramters.
 * @n: The number of parameters to sum
 * @...: A variable number of paramters to calculate the sum of.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i, sum = 0;

	va_start(ad, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ad, int);

	va_end(ad);
	return (sum);
}
