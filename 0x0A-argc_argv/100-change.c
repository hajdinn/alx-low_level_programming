#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of function to print number of coin
 * @argv: argument array
 * @argc: argument number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coins[x])
		{
			result++;
			num -= coins[x];
		}
	}
	printf("%d\n", result);
	return (0);
}
