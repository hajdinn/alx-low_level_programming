#include "main.h"
/**
 * _islower - start of program to check lowercase character
 * @c: character to check
 *
 * Return: 1 for lowercase character or 0 for anyhting
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
