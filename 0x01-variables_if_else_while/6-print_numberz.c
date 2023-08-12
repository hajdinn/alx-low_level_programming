#include <stdio.h>
/**
 * main - start of program to print numbers
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
