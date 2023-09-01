#include <stdio.h>
#define unused(x) (void)(x)
#include "main.h"
/**
 * main - start of function that print number of argument passed through it
 * @argv: argument number
 * @argc: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unused(argv);
	printf("%d\n", argc - 1);
	return (0);
}
