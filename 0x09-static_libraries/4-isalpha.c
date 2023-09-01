#include "main.h"
/**
 * _isalpha - program to check for alphabetic character
 * @c: Chaacter to be checked
 *
 * Return: 1 for alphabetic character, 0 for non alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
