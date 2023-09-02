#include <ctype.h>
#define unused(x) (void)(x)
/**
 * check_num - string to check
 * @s: string array
 * Return: 0
 */
int check_num(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (!isdigit(s[x]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - start of program that add numbers
 * @argv: argument
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	if (argv > 1)
	{
		for (x = 1; x < argc; x++)
		{
			if (check_sum(argv[x]))
			{
				sum += atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}
}
