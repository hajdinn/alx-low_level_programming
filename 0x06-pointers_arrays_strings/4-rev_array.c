#include "main.h"
/**
 * reverse_array - start of function to reverse the content of array of integer
 * @a: string to reverse
 * @n: number of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	y = 0;
	n = n - 1;

	while (y <= n)
	{
		x = a[y];
		a[y++] = a[n];
		a[n--] = x;
	}
}
