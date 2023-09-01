#include "main.h"
#define unused(x) (void)(x)
#include <stdio.h>
/**
 * main - start of function that print name of program
 * @argv: array of argument
 * @argc: argument number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unused(argc);
	printf("%s\n", *argv);
	return (0);
}
