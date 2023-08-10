#include <unistd.h>
#include <stdio.h>
/**
 * main - start for a a C program that prints a line
 *
 * Retuen: 1 (successful program)
 */
int main(void)
{
	write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
