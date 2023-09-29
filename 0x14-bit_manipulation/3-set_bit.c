#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - sets a bit
 * @n: integer to change
 * @index: index of the bit
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
