#include "main.h"
#include <stdio.h>

/**
 * main - start of function that multiply number
 * @argv: argument array
 * @argc: number of argument
 * Return: value
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
