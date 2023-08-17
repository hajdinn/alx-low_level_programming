#include "main.h"
/**
 * _isdigit - start of function to check for digit
 * @c: character to be checked
 * Return: 1 for a digit or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
