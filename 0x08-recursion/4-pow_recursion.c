#include "main.h"
/**
 * _pow_recursion - start of function that returns the value of x
 * @x: value of x
 * @y: value of y
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return(1);
}
