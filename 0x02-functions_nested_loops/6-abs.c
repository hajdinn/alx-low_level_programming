#include "main.h"
/**
 * _abs - start of function to compute absolute value of integer
 * @n: integer to make absolute value
 * Return:  zero or absolute value of number
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
