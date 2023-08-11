#include <stdio.h>
/**
 * main - starting program that print single digit in base 10
 *
 * Return: 0 (program is success)
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
