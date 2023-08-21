#include "main.h"
#include <stdio.h>
/**
 * print_array - start of function to print element of an array
 * @a: pointer of array
 * @n: number of element to print
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
