#include <stdio.h>
/**
 * main - start of program to print number
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	int f = 0;

	for (; f < 10 ; f++)
		purchar('0' + f);
	putchar('\n');
	return (0);
}
