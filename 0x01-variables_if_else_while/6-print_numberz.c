#include <stdio.h>
/**
 * main - start of program to print number
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		purchar('0' + a);
	putchar('\n');
	return (0);
}
