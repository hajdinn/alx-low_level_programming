#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -start of program to prints all natural numbers
 * @n: the number to start printing
 * Return: 0
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(",");
			}
		}
	} else
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(",");
			}
		}
	}
	printf("\n");
}

