#include "main.h"
/**
 * get_endianness - fubction to checks if a machine is endianness
 * Return: value
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

