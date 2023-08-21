#include "main.h"
/**
 * swap_int - start of function swap value of two integer
 * @a: value of first integer
 * @b: value of second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
