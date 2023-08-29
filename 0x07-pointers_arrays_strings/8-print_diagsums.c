#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - start of function to print integer of diagonal square matx
 * @size: size of matrix
 * @a: array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int dia1 = 0;
	int dia2 = 0;

	for (x = 0; x < size; x++)
	{
		dia1 += a[(x * size) + x];
		dia2 += a[(size - 1) + ((size - 1) * x)];
	}
	printf("%d, %d\n", dia1, dia2);
}
