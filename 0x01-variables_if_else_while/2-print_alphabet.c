#include <stdio.h>
/**
 * main - start of program to print alphabet in lowercase
 *
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
