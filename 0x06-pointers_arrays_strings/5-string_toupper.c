#include "main.h"
/**
 * *string_toupper - start of function that changes lowercase to uppercase
 * @y: character tomakr uppercase
 *  Return: uppercase
 */
char *string_toupper(char *y)
{
	int x;

	x = 0;

	for (x = 0; y[x] != '\0'; x++)
		if (y[x] >= 'a' && y[x] <= 'z')
			y[x] = y[x] - 32;
	return (y);
}
