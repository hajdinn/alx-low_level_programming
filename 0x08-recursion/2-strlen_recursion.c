#include "main.h"
/**
 * _strlen_recursion - start of function that that returns the length of string
 * @s: lenth of string
 * Return: value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}
