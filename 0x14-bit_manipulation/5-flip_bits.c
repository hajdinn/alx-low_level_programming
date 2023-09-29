#include "main.h"
/**
 * flip_bits - number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int change;
	unsigned long int flips = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		change = flips >> i;
		if (change & 1)
			count++;
	}

	return (count);
}
