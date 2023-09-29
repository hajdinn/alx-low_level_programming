#include "main.h"
/**
 * clear_bit - clear index to 0
 * @n: int to pass
 * @index: index of the bit to clear
 * Return: int value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
