#include <stdio.h>
/**
 * main - start of program to print lowercase in reverse
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
