#include <stdio.h>
/**
 * main - start of program to print numbers in base 16
 *
 * Return: 0 (successful program)
 */
int main(void)
{
	unsigned char a = '0';
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for (x = 0; x < 6; x++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
