#include <stdio.h>
/**
 * main - starting of program to print lowercase followed by newline
 *
 * Return: 0 (program is a success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
